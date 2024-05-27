call: fibonacci-orig fibonacci fibonacci.o assembly

fibonacci: fibonacci.o fib.o
        gcc -o fibonacci fibonacci.o fib.o

fibonacci.o: fibonacci.c fib.c
        gcc -c -fpic fib.c
        gcc -c fibonacci.c

assembly: fibonacci.c fib.c
        gcc -S fib.c fibonacci.c

fibonacci-orig: fibonacci-orig.c
        gcc -o fibonacci-orig fibonacci-orig.c

clean:
        rm fibonacci-orig
        rm fibonacci.o
        rm fibonacci.s
        rm fib.o
		rm fib.s
		rm fibonacci
