CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -rf

SRC = ./main.cpp \

OBJS = $(SRC:.cpp=.o)
NAME = ex00

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
