COMPILER = clang
TAGS = -lbsd -Wall -Wextra -Werror
MAIN = ./main.c
TESTS = ./tests/*.c
FUNCTIONS = ./functions/*.c

PNAME = ./main.out

all: compiler exe
sall: scompiler exe
compiler:
	${COMPILER} ${TAGS} ${MAIN} ${TESTS} ${FUNCTIONS} -o ${PNAME}
scompiler:
	${COMPILER} ${MAIN} ${TESTS} ${FUNCTIONS} -o ${PNAME}
exe:
	${PNAME}
