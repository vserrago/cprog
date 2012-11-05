CC=gcc
OBJ=bstTester.o bst.o
BINARY=bst

${BINARY}: Makefile ${OBJ} 
	${CC} -o ${BINARY} ${OBJ}

bstTester.o: bstTester.c bst.h
	${CC} -c bstTester.c

bst.o: bst.c bst.h
	${CC} -c bst.c

clean:
	rm ${OBJ} ${BINARY}
