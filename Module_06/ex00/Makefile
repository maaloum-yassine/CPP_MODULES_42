# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 15:28:15 by ymaaloum          #+#    #+#              #
#    Updated: 2024/05/20 03:52:05 by ymaaloum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXX			=	g++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME		=	convert
SRC			=	main.cpp \
				ScalarConverter.cpp \
				Parse.cpp \

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

obj/%.o: %.cpp ScalarConverter.hpp
		$(CXX) $(CXXFLAGS) -c  $< -o $@

clean:
		@rm -rf obj
		@echo "$(RED)$(NAME) : file obj deleted ! [^_^]$(RESET)"

fclean: clean
			@rm -f $(NAME)
			@echo "$(RED)$(NAME) : file obj and file executable deleted ! [^_^]$(RESET)"
re: fclean all

