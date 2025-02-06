CC = clang++
CFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 -g
RM = rm -rf

SRC = ./main.cpp \
./ClapTrap.cpp \
./FragTrap.cpp \
./ScavTrap.cpp \
./DiamondTrap.cpp \

OBJS = $(SRC:.cpp=.o)
NAME = DiamondTrap

all : $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@$(RM) $(OBJS)

fclean :
	@$(RM) $(OBJS) $(NAME)

re : 
	@make fclean
	@make all

.PHONY: all clean fclean re
