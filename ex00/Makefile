NAME = claptrap

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = ./src/
OBJ_DIR = ./obj/
INC_DIR = ./inc/

SRC_FILES = main.cpp ClapTrap.cpp

OBJ_FILES = $(SRC_FILES:.cpp=.o)


SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

all : $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@$(CC) $(FLAGS) -I $(INC_DIR) -o $@ -c $<
	@echo updated $@

$(NAME) : obj $(OBJ)
	@echo ".o files updated!...relinking..."
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "$(NAME) executable compiled!"

obj:	
	@mkdir -p $(OBJ_DIR)

clean :
	rm -rf $(OBJ_DIR)*.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
