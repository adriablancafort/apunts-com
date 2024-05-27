all: calculator
calculator: calculator.o
	gcc -o calculator calculator.o
calculator.o: calculator.c
	gcc -c calculator.c

clean:
	rm -f calculator calculator.o
