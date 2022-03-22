# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dokkim <dokkim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 17:38:14 by dokkim            #+#    #+#              #
#    Updated: 2022/03/22 18:29:54 by dokkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phoneBook

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
INC			= -I ./includes 
MAIN		= main.cpp
RM			= rm -f

OBJS		= $(SRCS:.c=.o)

all			: $(NAME)

$(NAME)		: $(OBJS)
	$(CXX) $(CXXFLAGS) $(INC) $^ -o $@

clean		: $(RM) $(OBJS)

flcean		: clean
				$(RM) $(NAME)

re			: clean all

.PHONY		: all clean re
