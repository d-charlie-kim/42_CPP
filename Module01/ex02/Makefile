NAME		= ThisIsBrain

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
RM			= rm -f

SRCS		= main.cpp

OBJS		= $(SRCS:.cpp=.o)

%.o			: %.cpp
			$(CXX) $(CXXFLAGS) -c $^ -o $@

all			: $(NAME)

$(NAME)		: $(OBJS)
			$(CXX) $(CXXFLAGS) $^ -o $@

clean		:
				$(RM) $(OBJS)

fclean		: clean
				$(RM) $(NAME)

re			: clean all

.PHONY		: all clean re
