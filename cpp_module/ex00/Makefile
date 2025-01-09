CC = clang++
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRC = ./megaphone.cpp

OBJS = $(SRC:.cpp=.o)
NAME = megaphone

all : $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@$(RM) $(OBJS)

fclean :
	@$(RM) $(OBJS) $(NAME)

re : 
	@make fclean
	@make all

.PHONY: all clean fclean re
