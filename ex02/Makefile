CC = g++
CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98
RM = rm -rf

SRC = ./tests.cpp

OBJS = $(SRC:.cpp=.o)
NAME = restoration

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
