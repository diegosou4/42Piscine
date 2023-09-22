CFLAGS = -Wall -Wextra -Werror
TARGET = rush-02
SOURCES = src/all_dict.c src/all_ft.c src/all_name.c src/all_structs.c src/main.c
INCLUDES = -Iincludes/

all: ${TARGET}

${TARGET}: ${SOURCES}
	cc ${CFLAGS} -o ${TARGET} ${SOURCES} ${INCLUDES}

clean:
	rm -f ${TARGET}

fclean: clean

re: fclean all
