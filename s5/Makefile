all: fib fib_all 

fib: fib.c fibonacci.c
	gcc -o fib -g fib.c fibonacci.c

fib_all: fib.c fibonacci.c
	gcc -O0 -o fib0 fib.c fibonacci.c
	gcc -O1 -o fib1 fib.c fibonacci.c
	gcc -O2 -o fib2 fib.c fibonacci.c
	gcc -O3 -o fib3 fib.c fibonacci.c

clean:
	rm fib
	rm fib0
	rm fib1
	rm fib2
	rm fib3
