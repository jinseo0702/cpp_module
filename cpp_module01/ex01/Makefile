CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -rf

SRC = ./main.cpp \
./Zombie.cpp \
./ZombieHorde.cpp \

OBJS = $(SRC:.cpp=.o)
NAME = ex01

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
