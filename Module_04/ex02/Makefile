# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 03:51:19 by ymaaloum          #+#    #+#              #
#    Updated: 2024/01/03 04:14:10 by ymaaloum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			=	g++
CXXFLAGS	=	 -Wall -Wextra -Werror -std=c++98
NAME		= 	Animal
SRC			= 	main.cpp \
				AAnimal.cpp \
				Dog.cpp \
				Cat.cpp \
				Brain.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp \


RESET	= 	\033[1;97m
GREEN 	= 	\033[1;32m
RED		= 	\033[1;31m

OBJ		=	$(SRC:.cpp=.o)
OBJ		:=	$(addprefix obj/, $(OBJ))
OBJ_DIR	=	obj/

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@echo "$(GREEN)$(OBJ_DIR) : Created ! [^_^]$(RESET)"
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ)
		@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
		@echo "$(GREEN)$(NAME) : Created ! [^_^]$(RESET)"

obj/%.o: %.cpp AAnimal.hpp Brain.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
		$(CXX) $(CXXFLAGS) -c  $< -o $@

clean:
		@rm -rf obj
		@echo "$(RED)$(NAME) : file obj deleted ! [^_^]$(RESET)"

fclean: clean
			@rm -f $(NAME)
			@echo "$(RED)$(NAME) : file obj and file executable deleted ! [^_^]$(RESET)"
re: fclean all
