NAME= ex02

CPP_FLAGS = -Wall -Werror -Wextra -MMD -MP -std=c++98

OBJ_DIR = ./obj

SRC_FILES = main

SRC = $(addsuffix .cpp, ${SRC_FILES})
OBJ = $(addprefix ${OBJ_DIR}/, $(addsuffix .o, ${SRC_FILES}))
DEP = $(addprefix ${OBJ_DIR}/, $(addsuffix .d, ${SRC_FILES}))

all: ${NAME}

${NAME}: ${OBJ}
	c++ ${CPP_FLAGS} ${OBJ} -o ${NAME}

${OBJ_DIR}/%.o: %.cpp Makefile
	mkdir -p ${OBJ_DIR}
	c++ ${CPP_FLAGS} -c $< -o $@

-include ${DEP}

clean:
	rm -r ${OBJ_DIR}/*.o
	rm -r ${OBJ_DIR}/*.d

fclean: clean
	rm -r ${NAME}

re: fclean all

.PHONY: all clean fclean re
