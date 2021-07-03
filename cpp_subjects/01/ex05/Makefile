NAME			= brain

CC				= clang++

FLAGS			= -Wall -Wextra -Werror #-std=c++98

OBJDIR			= ./obj
INCDIR			= ./

SRCS			=	main.cpp \
					Brain.cpp \
					Human.cpp \

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

re:				fclean all

.PHONY:			all clean fclean re