CC = clang++
CFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 -g
RM = rm -rf

SRC = ./main.cpp \
./Bureaucrat.cpp \
./Form.cpp \
./Form_GradeTooHighException.cpp \
./Form_GradeTooLowException.cpp \
./GradeTooHighException.cpp \
./GradeTooLowException.cpp \

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
