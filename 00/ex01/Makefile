NAME	= megaphone
SRCS	= main.cpp Phonebook.cpp Contact.cpp Utils.cpp
OBJS	= $(SRCS:.cpp=.o)
FLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Phonebook.hpp Contact.hpp Utils.hpp
	c++ $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean