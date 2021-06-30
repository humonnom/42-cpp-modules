NAME			= megaphone

CC				= clang++

FLAGS			= -Wall -Wextra -Werror 

SRCS			= megaphone.cpp

OBJS			= $(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(CC) $(FLAGS) -I. -o $(NAME) $(OBJS) 2> /dev/null || true

./%.o:			./%.cpp
				@$(CC) $(FLAGS) -o $@ -c $< 2> /dev/null || true

clean:
				@rm -rf $(OBJS)

fclean:			clean
				@rm -rf $(NAME)

re:				fclean all

.PHONY:			all clean fclean re