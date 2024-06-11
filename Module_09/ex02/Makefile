# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/04 22:36:49 by ymaaloum          #+#    #+#              #
#    Updated: 2024/05/20 05:02:56 by ymaaloum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXX			=	g++
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++98
NAME			=	PmergeMe
SRC			=	main.cpp \
				PmergeMe.cpp \



RESET		= 	\033[1;97m
GREEN 		= 	\033[1;32m
RED		= 	\033[1;31m

OBJ		=	$(SRC:.cpp=.o)
OBJ		:=	$(addprefix obj/, $(OBJ))
OBJ_DIR		=	obj/

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@echo "$(GREEN)$(OBJ_DIR) : Created ! [^_^]$(RESET)"
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ)
		@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
		@echo "$(GREEN)$(NAME) : Created ! [^_^]$(RESET)"

obj/%.o: %.cpp PmergeMe.hpp
		$(CXX) $(CXXFLAGS) -c  $< -o $@

clean:
		@rm -rf obj
		@echo "$(RED)$(NAME) : file obj deleted ! [^_^]$(RESET)"

fclean: clean
			@rm -f $(NAME)
			@echo "$(RED)$(NAME) : file obj and file executable deleted ! [^_^]$(RESET)"
re: fclean all
