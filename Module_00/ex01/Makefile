# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 07:11:56 by ymaaloum          #+#    #+#              #
#    Updated: 2024/05/20 01:55:12 by ymaaloum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= 	c++
CPPFLAGS	= 	-Wall -Wextra -Werror -std=c++98
NAME		=	PhoneBook
SRC			=	main.cpp \
				PhoneBook_utils1.cpp \
				PhoneBook_utils2.cpp \
				prog_utils.cpp \
				Contact1.cpp \
				Contact2.cpp \

RESET		= 	\033[1;97m
GREEN 		= 	\033[1;32m
RED			= 	\033[1;31m

OBJ			=	$(SRC:.cpp=.o)
OBJ			:=	$(addprefix obj/, $(OBJ))
OBJ_DIR		=	obj/

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@echo "$(GREEN)$(OBJ_DIR) : Created ! [^_^]$(RESET)"
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ)
		@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
		@echo "$(GREEN)$(NAME) : Created ! [^_^]$(RESET)"

obj/%.o: %.cpp Contact.hpp   PhoneBook.hpp
		$(CC) $(CPPFLAGS) -c  $< -o $@

clean:
		@rm -rf obj
		@echo "$(RED)$(NAME) : file obj deleted ! [^_^]$(RESET)"

fclean: clean
			@rm -f $(NAME)
			@echo "$(RED)$(NAME) : file obj and file executable deleted ! [^_^]$(RESET)"
re: fclean all
