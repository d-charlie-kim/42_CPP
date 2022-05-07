NAME		= a.out

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
INC			= -I ./includes 
RM			= rm -f

SRCS		= ./srcs/main.cpp \
				./srcs/Base.cpp \

OBJS		= $(SRCS:.cpp=.o)

%.o			: %.cpp
			$(CXX) $(CXXFLAGS) $(INC) -c $^ -o $@

all			: $(NAME)

$(NAME)		: $(OBJS)
			$(CXX) $(CXXFLAGS) $(INC) $^ -o $@

clean		:
				$(RM) $(OBJS)

fclean		: clean
				$(RM) $(NAME)

re			:
			make fclean
			make all

.PHONY		: all clean re
