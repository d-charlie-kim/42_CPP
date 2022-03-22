
NAME		= megaphone

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror
MAIN		= megaphone.cpp
RM			= rm -f

all			: $(NAME)

$(NAME)		: $(MAIN)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean		: $(RM) $(NAME)

fclean		: clean
				$(RM) $(NAME)

re			: clean all

.PHONY		: all clean re
