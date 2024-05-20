/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 03:27:35 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/03/22 03:50:43 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitcoinExchange ::BitcoinExchange()
{}

BitcoinExchange :: BitcoinExchange(const BitcoinExchange& _BitcoinExchange2)
{
	*this = _BitcoinExchange2;
}


BitcoinExchange& BitcoinExchange ::operator=(const BitcoinExchange& _BitcoinExchange2)
{
	if (this != &_BitcoinExchange2)
	{
		switch(this->_openfile)
		{
			case 0 :break;
			case 1 : this->_Dbase.close(); break;
			default :
				this->_Dbase.close();
				this->_File.close();
		}
		this->_File.open(_BitcoinExchange2._Path_file);
		this->_Dbase.open("data.csv");
		this->_openfile = 0;
	}
	return *this;
}

BitcoinExchange:: BitcoinExchange(const std::string& Path_file):_Path_file(Path_file)
{
	this->_File.open(Path_file);
	this->_Dbase.open("data.csv");
	this->_openfile = 0;
}

bool isLeapYear(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

bool CheckRangeDate(int year, int month, int day)
{
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);

	if 	(year < 2009 || year > (now->tm_year + 1900)
			|| (year == 2009 && month == 1 && day == 1)
			|| (year == (now->tm_year + 1900) && month > (now->tm_mon + 1))
			|| (year == (now->tm_year + 1900) && (month == (now->tm_mon + 1) && day > now->tm_mday)))
		return false;
	return true;
}

bool isDateValid(int year, int month, int day) {
	if (year < 0 || month < 1 || month > 12 || day < 1 || !CheckRangeDate(year, month, day))
		return false;
	int daysInMonth[] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	return day <= daysInMonth[month - 1];
}

bool	CheckFormatDate(std ::string& date)
{
	if (!(date.length() == 10))
		return false;
	for (int i = 0; i < 10; ++i) {
		if (i == 4 || i == 7)
		{
			if (date[i] != '-')
				return false;
		}
		else
		{
			if (date[i] < '0' || date[i] > '9')
				return false;
		}
	}
	return(isDateValid(std::atoi(date.c_str()), std::atoi(date.c_str() + 5), std::atoi(date.c_str() + 8)));
}



bool	CheckValue(std ::string& value, double& valueTdouble)
{
	char	check;
	char*	endPtr;

	check = 0;
	for (size_t x = 0; x < value.length(); ++x)
	{
		if (value[0] == '-' || value[0] == '+')
			continue;
		if (!std::isdigit(value[x]))
		{
			if ((std::isdigit(value[x - 1]) && value[x] == '.') &&  value[x + 1] && check < 1)
				check++;
			else
				return (false);
		}
	}
 	valueTdouble = strtod(value.c_str(), &endPtr);
	if (endPtr == value || *endPtr != '\0')
		return (false);
	return true;
}


void	BitcoinExchange ::btc(const std::string& Path_file)
{
	if (!(Path_file.find(".csv", Path_file.length() - 4) != std::string::npos))
	{
		std :: cerr << "ERROR:❌ THE FILE PATH MUST BE IN .CSV FORMAT" << std :: endl;
		exit(EXIT_FAILURE);
	}
	BitcoinExchange *_BitcoinExchange2 = new BitcoinExchange(Path_file);
	if ((_BitcoinExchange2->_File.is_open()))
	{
		_BitcoinExchange2->_openfile = 1;
		if ((_BitcoinExchange2->_Dbase.is_open()))
		{
			_BitcoinExchange2->_openfile = 2;
			if (_BitcoinExchange2->FillMap())
			{
				delete _BitcoinExchange2;
				exit(EXIT_FAILURE);
			}
				delete _BitcoinExchange2;
				exit(EXIT_SUCCESS);
		}
		else
		{
			std :: cerr << "ERROR OPEN FOR DATABASE FILE❌ CHECK PATH FILE FORMAT MOST BE .csv" << std :: endl;
			delete _BitcoinExchange2;
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		std :: cerr << "ERROR❌ : OPEN FILE " << Path_file << std :: endl;
		delete _BitcoinExchange2;
		exit(EXIT_FAILURE);
	}
}

void	 trim (std :: string &arg)
{
	int	start;
	int	len;

	start = -1;
	len = arg.length();
	while (++start < len && std::isspace(arg[start]))
	;
	len ++;
	while (--len > start && std::isspace(arg[len - 1]))
	;
	arg = arg.substr(start, len - start);
}



void	BitcoinExchange :: ReadDataBase(std ::ifstream& File )
{
	std :: string	line;
	char			count_line;

	count_line = 0;
	while(std ::getline(File, line))
	{
		if (count_line == 0)
		{
			if (line == "date,exchange_rate")
			{
				++count_line;
				continue;
			}
				throw std::string("ERROR FOR DATABASE❌ 'HEADER' ");
		}
		if (line.empty())
			throw std::string("ERROR FOR DATABASE❌ LINE IS EMPTY") + std::string(line);
		size_t pos = line.find(',');
		if (pos != std::string::npos)
		{
			std::string date = line.substr(0, pos);
			std::string value = line.substr(pos + 1);
			trim(date);
			trim(value);
			if (CheckFormatDate(date))
			{
				double value_da;
				if (CheckValue(value, value_da) && !(value_da > MAX_FLOAT || value_da < 0))
				{
					if (this->list_data.find(date) == this->list_data.end())
						this->list_data[date] =  static_cast<float>(value_da);
					else
						throw std::string("ERROR FOR DATABASE❌ DATE ALREADY EXISTED CHECK DATE ==> ") + std::string(line);
				}
				else
					throw std::string("ERROR FOR DATABASE❌ CHECK VALUE 'LINE' ==> ") + std::string(line);
			}
			else
				throw std::string("ERROR FOR DATABASE❌ CHECK FORMAT DATE 'LINE' ==> ") + std::string(line);
		}
		else
			throw std::string("ERROR FOR DATABASE❌ CHECK SYNATAX LINE ==> ") + std::string(line);
	}
}

void	BitcoinExchange ::ReadFile(std ::ifstream& File)
{
	std :: string	line;
	char			count_line = 0;

	while(std ::getline(File, line))
	{
		try
		{
			if (count_line == 0)
			{
				++count_line;
				if (!(line == "date | value"))
					std :: cout << "Error: for 'HEADER' " << std :: endl;
				continue;
			}
			size_t pos = line.find(" | ");
			if (pos != std::string::npos)
			{
				std::string date = line.substr(0, pos);
				std::string value = line.substr(pos + 3);
				trim(date);
				trim(value);
				if (CheckFormatDate(date))
				{
					double value_da;
					if (CheckValue(value, value_da))
					{
						if (value_da < 0)
							throw::std::string("Error: not a positive number.");
						else if (value_da > 1000)
							throw::std::string("Error: too large a number.");
						else
						{
							std::map<std::string, double>::iterator it = this->list_data.upper_bound(date);
							if (it != this->list_data.begin())
							{
								--it;
								std :: cout << date << " => " << value << " = " << it->second * value_da << std :: endl;
							}
							else
								throw::std::string("Error: bitcoin does not exist as of this date ==>") + std:: string(date);
						}
					}
					else
						throw::std::string("Error: bad input for value => ")+ std:: string(value);
				}
				else if (!date.empty())
					throw::std::string("Error: bad input for date => ")+ std:: string(date);
				else
					throw::std::string("Error: bad input =>")+ std:: string(line) + std::string(" 'check syntax line'");
			}
			else
				throw::std::string("Error: bad input =>")+ std:: string(line) + std::string(" 'check syntax line'");
		}
		catch(const std::string &ex)
		{
			std :: cout << ex << std :: endl;
		}
	}
}

bool	BitcoinExchange ::	FillMap()
{
	try
	{
		ReadDataBase(this->_Dbase);
	}
	catch(const std::string &ex)
	{
		std :: cout << ex << std :: endl;
		return false;
	}
	ReadFile(this->_File);
	return true;
}


BitcoinExchange:: ~BitcoinExchange()
{
	this->list_data.clear();
	switch(this->_openfile)
	{
		case 0 : break;
		case 1 :
			this->_Dbase.close(); break;
		default :
			this->_Dbase.close();
			this->_File.close();
	}
}
