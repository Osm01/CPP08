

NAME = easyfind

CPPFILES = main.cpp

CPPCOMPI = c++ -std=c++98 -fsanitize=address -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(CPPFILES)
	$(CPPCOMPI) $(CPPFILES) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all

.PHONY : all clean fclean re