/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 06:27:42 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 03:12:45 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

// void	TsT()
// {
// 	// ATTribut for Character must be public
// 	Character* me = new Character();
// 	Character* ma = new Character();
// 	AMateria* tmp1 = new Cure();
// 	AMateria* tmp2 = new Ice();
// 	me->equip(tmp1);
// 	me->equip(tmp2);
// 	AMateria* tmp3 = new Ice();
// 	AMateria* tmp4 = new Cure();
// 	AMateria* tmp5 = new Cure();
// 	AMateria* tmp6 = new Ice();

// 	ma->equip(tmp3);
// 	ma->equip(tmp4);
// 	ma->equip(tmp5);
// 	ma->equip(tmp6);

// 	for (int i = 0 ; i < 4 ; i++)
// 	{
// 		if ( ma->_inventory[i])
// 			std :: cout << "ma "<< ma->_inventory[i]->getType() << std ::endl;
// 	}
// 	std :: cout << "**********" << std ::endl;
// 	for (int i = 0 ; i < 4 ; i++)
// 	{
// 		if ( me->_inventory[i])
// 			std :: cout << "me " << me->_inventory[i]->getType() << std ::endl;
// 	}
// 	std :: cout << "**********" << std ::endl;
// 	ma->unequip(0);
// 	ma->unequip(1);
// 	ma->unequip(2);

// 	ma->unequip(3);
// 	ma->equip(tmp3);
// 	ma->equip(tmp4);
// 	ma->equip(tmp5);
// 	ma->equip(tmp6);
// 	ma->unequip(0);
// 	ma->unequip(1);
// 	ma->unequip(2);
// 	ma->unequip(3);
// 	ma->equip(tmp3);
// 	ma->equip(tmp4);
// 	ma->equip(tmp5);
// 	ma->equip(tmp6);

// 	*me = *ma;

// 	for (int i = 0 ; i < 4 ; i++)
// 	{
// 		if ( ma->_inventory[i])
// 			std :: cout << "ma "<< ma->_inventory[i]->getType() << std ::endl;
// 	}
// 	std :: cout << "**********" << std ::endl;
// 	for (int i = 0 ; i < 4 ; i++)
// 	{
// 		if ( me->_inventory[i])
// 			std :: cout << "me " << me->_inventory[i]->getType() << std ::endl;
// 	}
// 	me->equip(tmp2);
// 	*ma = *me;
// 	std :: cout << "**********" << std ::endl;
// 	for (int i = 0 ; i < 4 ; i++)
// 	{
// 		if ( ma->_inventory[i])
// 			std :: cout << "ma "<< ma->_inventory[i]->getType() << std ::endl;
// 	}
// 	std :: cout << "**********" << std ::endl;
// 	for (int i = 0 ; i < 4 ; i++)
// 	{
// 		if ( me->_inventory[i])
// 			std :: cout << "me " << me->_inventory[i]->getType() << std ::endl;
// 	}
// 	delete 	tmp1;
// 	delete	tmp2;
// 	delete	tmp3;
// 	delete	tmp4;
// 	delete	tmp5;
// 	delete	tmp6;
// 	delete me;
// 	delete ma;
// }


// int main()
// {

// 	TsT();
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria*	tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	delete tmp;
// 	system ("Leaks Prog");
// 	return 0;
// }


void test1()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

 	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
}


void	test2()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}


void	test3()
{
	Character c;
	Character c2(c);
	c2.equip(new Ice);
	c2 = c;
}

void	test4()
{
	Character *c = new Character();
	Cure *cure = new Cure();

	c->equip(cure);
	c->unequip(0);

	delete c;
}

void	test5()
{
	AMateria *a = NULL;
	Character *c = new Character;

	c->equip(a);
	c->equip(a);
	c->equip(a);
	c->equip(a);
	c->unequip(0);
	c->unequip(1);
	c->unequip(2);
	c->unequip(3);
	c->unequip(4);
	c->equip(a);
	delete c;
}

void	test6()
{
	Character a("a");
	a.equip(new Cure());
	a.equip(new Ice());
	a.equip(new Cure());
	a.equip(new Ice());

	a.use(0, a);
	a.use(1, a);
	a.use(2, a);
	a.use(3, a);

	Character b("b");

	b = a;

	b.use(0, b);
	b.use(1, b);
	b.use(2, b);
	b.use(3, b);
}

void test7()
{
	Character a("a");

	a.equip(new Cure());
	a.equip(new Ice());
	a.equip(new Cure());
	a.equip(new Ice());

	a.use(0, a);
	a.use(1, a);
	a.use(2, a);
	a.use(3, a);

	Character b("b");
	b.equip(new Cure());
	b.equip(new Ice());

	a = b;

	b.use(0, b);
	b.use(1, b);
}

void	test8()
{
	ICharacter *i = new Character("bob");
	i->equip(new Cure());
	i->equip(new Ice());
	i->equip(new Cure());
	i->equip(new Ice());
	i->unequip(1);
	i->use(1, *i);
	i->unequip(0);
	delete i;
}

void	test9()
{
	Character a("a");
	a.equip(new Cure());
	a.equip(new Ice());
	a.equip(new Cure());
	a.equip(new Ice());

	a.use(0, a);
	a.use(1, a);
	a.use(2, a);
	a.use(3, a);

	Character b("b");

	b = a;

	b.use(0, b);
	b.use(1, b);
	b.use(2, b);
	b.use(3, b);
}

int main()
{
	std::cout << "--------- test 1 ----------" << std::endl;
	test1();
	std::cout << "--------- test 2 ----------" << std::endl;
	test2();
	std::cout << "--------- test 3 ----------" << std::endl;
	test3();
	std::cout << "--------- test 4 ----------" << std::endl;
	test4();
	std::cout << "--------- test 5 ----------" << std::endl;
	test5();
	std::cout << "--------- test 6 ----------" << std::endl;
	test6();
	std::cout << "--------- test 7 ----------" << std::endl;
	test7();
	std::cout << "--------- test 8 ----------" << std::endl;
	test8();
	std::cout << "--------- test 9 ----------" << std::endl;
	test9();
	std::cout << "--------- test 10 LEAKS ----------" << std::endl;
	system("leaks  Prog");
	return 0;
}


