# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/28 23:11:53 by ymaaloum          #+#    #+#              #
#    Updated: 2024/01/30 05:23:12 by ymaaloum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXX			=	g++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME		= 	Prog
SRC			=	main.cpp \
				Base.cpp \

RESET	=	\033[1;97m
GREEN	=	\033[1;32m
RED		=	\033[1;31m

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

obj/%.o: %.cpp A.hpp B.hpp Base.hpp C.hpp
				$(CXX) $(CXXFLAGS) -c  $< -o $@

clean:
			@rm -rf obj
			@echo "$(RED)$(NAME) : file obj deleted ! [^_^]$(RESET)"

fclean: clean
			@rm -f $(NAME)
			@echo "$(RED)$(NAME) : file obj and file executable deleted ! [^_^]$(RESET)"
re: fclean all
