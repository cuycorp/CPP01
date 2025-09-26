#Executable name
NAME = sedIsForLosers

#Compiler and flags 
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g

#Source files
SRCS = src/main.cpp src/processLine.cpp src/FileReader.cpp 

#Object file
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) 

#Compile individual object files
%.o: %.cpp
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