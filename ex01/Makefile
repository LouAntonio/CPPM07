# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/28 13:37:31 by lantonio          #+#    #+#              #
#    Updated: 2025/10/30 11:42:33 by lantonio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	iter.out

HEADERS		=	./includes/iter.hpp \

SRCS		=	./src/main.cpp \

CXX			=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

OBJS		=	$(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	@$(CXX) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;32mSUCCESS!\033[0m"

%.o:%.cpp $(HEADERS)
	@$(CXX) $(FLAGS) -c $< -o $@

all: $(NAME)

clean :
	@rm -rf $(OBJS)
	@echo "Cleaning objects"

fclean : clean
	@rm -rf $(NAME)
	@echo "cleaning executable"

re : fclean all

.PHONY : all clean fclean re
