NAME			= abstract

CXX				= clang++

FLAGS			= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow
#				-Wshadow: name-hiding이 일어난 변수를 체크해주는 플래그, 
#				-std=c++98: 89와 호환이 되는지 확인하는 플래그, cpp11을 쓴다고 해서 에러를 표시하는 것은 아니다. 
OBJDIR			= ./obj
INCDIR			= ./

SRCS			=	main.cpp \
					AMateria.cpp \
					Cure.cpp \
					# Ice.cpp \
					ICharacter.cpp \
					IMateriaSource.cpp \


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