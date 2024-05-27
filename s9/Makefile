all:  mem-stack mem-heap-orig mem-stack-2 mem-heap-loop1 mem-heap-loop2 mem-heap-static

mem-stack: mem-stack.c
	gcc -o mem-stack mem-stack.c

mem-heap-orig: mem-heap-orig.c
	gcc -o mem-heap-orig mem-heap-orig.c

mem-stack-2: mem-stack-2.c
	gcc -o mem-stack-2 mem-stack-2.c

mem-heap-loop1: mem-heap-loop1.c
	gcc -o mem-heap-loop1 mem-heap-loop1.c

mem-heap-loop2: mem-heap-loop2.c
	gcc -o mem-heap-loop2 mem-heap-loop2.c

mem-heap-static: mem-heap-orig.c
	gcc -o mem-heap-static mem-heap-orig.c -static

clean:
	rm mem-stack
	rm mem-heap-orig
	rm mem-stack-2
	rm mem-heap-loop1
	rm mem-heap-loop2
	rm mem-heap-static
