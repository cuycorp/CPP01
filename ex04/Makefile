#Executable name
NAME = sedIsForLosers

#Compiler and flags 
CC = g++
IFLAGS = -I include
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g ${IFLAGS}

#Source files
SRCS = src/main.cpp src/processLine.cpp src/FileReader.cpp 

#Object file
OBJS = $(SRCS:src/%.cpp=obj/%.o)

all: $(NAME)

obj:
	mkdir -p obj 

$(NAME): obj $(OBJS) 
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) 

#Compile individual object files
obj/%.o: src/%.cpp
	$(CC) $(FLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJS)

# Clean everything
fclean: clean
	rm -f $(NAME)
	make 

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re