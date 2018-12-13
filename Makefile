NAME = wine

SRCS = main.cpp \
		Wine.cpp \

OBJ = $(SRCS:.cpp=.o)

CFLAGS = -std=c++11

all: $(NAME)

$(NAME): $(OBJ)
	g++ $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	g++ $(CFLAGS) -c $< -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re