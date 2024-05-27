#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv){
	
	if (strcmp(argv[1], "char")==0){
		char num;
		while(read(0, &num, sizeof(char))){
		printf("value: %c (%d decimal value)\n", num, num); 
		}
	}
	else if (strcmp(argv[1], "short")==0) {
		short num;
		while(read(0, &num, sizeof(short))){
		printf("value: %d (%d decimal value)\n", num, num); 
		}
	}
	else if (strcmp(argv[1], "int")==0) {
		int num;
		while(read(0, &num, sizeof(int))){
		printf("value: %i (%d decimal value)\n", num, num); 
		}
	}
	else if (strcmp(argv[1], "long")==0) {
		long num;
		while(read(0, &num, sizeof(long))){
		printf("value: %ld (%d decimal value)\n", num, num); 
		}
	}
	else if (strcmp(argv[1], "longlong")==0) {
		long long num;
		while(read(0, &num, sizeof(long long))){
		printf("value: %lld (%d decimal value)\n", num, num); 
		}
	}
	else {
		printf("The indicated type is not one of the supported ones: char, short, int, long or longlong.\n");
	}
	
	return 0;	
}
