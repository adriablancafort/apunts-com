all: hello2u
hello2u: hello2u.o
	gcc -o hello2u hello2u.o
hello2u.o: hello2u.c
	gcc -c hello2u.c

clean:
	rm -f hello2u hello2u.o
