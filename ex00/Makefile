NAME := BraiiiiiiinnnzzzZ

CFLAGS := -g -Werror -Wall -Wextra -std=c++98

SRC :=	newZombie.cpp \
		randomChump.cpp \
		main.cpp \
		Zombie.cpp
OBJ := $(SRC:.cpp=.o)

%.o:		%.cpp
			c++ $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
			c++ $(OBJ) -o $(NAME) $(CFLAGS)

all:		$(NAME)

clean:		
			$(RM) -f $(OBJ)

fclean:		clean
			$(RM) -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re