CXX     = g++
CXXFLAGS= -Wall -Wextra -std=c++17 -I include
NAME    = arena_game
SRC_DIR = src
SRCS    = $(SRC_DIR)/roll.cpp main.cpp
OBJS    = $(SRCS:.cpp=.o)

# Détection du système pour les commandes de suppression
ifeq ($(OS),Windows_NT)
    RM = del /F /Q
    EXE = .exe
else
    RM = rm -f
    EXE =
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)$(EXE)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
ifeq ($(OS),Windows_NT)
	-$(RM) "main.o"
	-$(RM) "src\*.o"
else
	$(RM) $(OBJS)
endif

fclean: clean
	-$(RM) "$(NAME)$(EXE)"

re: fclean all

.PHONY: all clean fclean re
