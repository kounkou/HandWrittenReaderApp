CFLAGS += -std=c99 -g -lm -Wall -Werror

unittest: node.o test.o 
	gcc ${CFLAGS} -o unittest node.o test.o
node.o: node.c
	gcc ${CFLAGS} -c node.c
test.o: test.c node.c
	gcc ${CFLAGS} -c test.c node.c

clean:
	rm -rf *.o unittest
