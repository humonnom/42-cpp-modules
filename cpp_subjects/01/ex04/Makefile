NAME			= replace

CC				= clang++

FLAGS			= -Wall -Wextra -Werror #-std=c++98

OBJDIR			= ./obj
INCDIR			= ./

SRCS			=	main.cpp \
					Sed.cpp \

OBJS 			= $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(FLAGS) -I. -o $(NAME) $(OBJS) #2> /dev/null || true

$(OBJDIR)/%.o:	./%.cpp
				mkdir $(OBJDIR) 2> /dev/null || true
				$(CC) $(FLAGS) -I$(INCDIR) -o $@ -c $< #2> /dev/null || true
clean:
				@rm -rf $(OBJDIR)

fclean:			clean
				@rm -rf $(NAME)
				@rm -rf *.txt.replace

re:				fclean all

turtle_test:	re
				./replace turtle.txt turtle cat

gummy_test:		re
				./replace gummy_bear.txt a A

do_nothing_test:re
				./replace gummy_bear.txt turtle cat

invalid_test:	re
				./replace nothing.txt a b

.PHONY:			all clean fclean re turtle_test gummy_test do_nothing_test invalid_test