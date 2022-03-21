NAME		= megaphone

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror
MAIN		= megaphone.cpp
RM			= rm -f

all			: $(NAME)

$(NAME)		: $(MAIN)
	$(CXX) $(MAIN) -o $@ $(CXXFLAGS)

clean		: $(RM) $(NAME)

re			: clean all

.PHONY		: all clean re
