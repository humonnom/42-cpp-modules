NAME			= fragtrap

CXX				= clang++

FLAGS			= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

OBJDIR			= ./obj
INCDIR			= ./

SRCS			=	main.cpp \
					ClapTrap.cpp \
					ScavTrap.cpp \
					FragTrap.cpp \

OBJS 			= $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(FLAGS) -I. -o $(NAME) $(OBJS) #2> /dev/null || true

$(OBJDIR)/%.o:	./%.cpp
				mkdir $(OBJDIR) 2> /dev/null || true
				$(CXX) $(FLAGS) -I$(INCDIR) -o $@ -c $< #2> /dev/null || true
clean:
				@rm -rf $(OBJDIR)

fclean:			clean
				@rm -rf $(NAME)

re:				fclean all

.PHONY:			all clean fclean re