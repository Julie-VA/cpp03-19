# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 11:45:31 by rvan-aud          #+#    #+#              #
#    Updated: 2021/12/15 15:41:36 by rvan-aud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp		\
				ClapTrap.cpp	\
				ScavTrap.cpp	\

NAME		= ex01

CXX			= clang++

RM			= rm -f

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJS		= $(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
			@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
