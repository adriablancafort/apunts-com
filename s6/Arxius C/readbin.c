#include <stdio.h>
#include <unistd.h>
#include <string.h>
	
int main(int argc, char **argv){
	int i=0;
	char* num;
    char type;
    if (argc == 1){
        printf("This program needs integer number/s as input parameter/s. It will write binary format.\n");
        return 1;
    }
    else if (argc == 2){
        type = argv[1];
    }
    else {
        printf("This program needs integer number/s as input parameter/s. It will write binary format.\n");
        return 1;
    }
    if (strcmp("long", &type)==0){
        read(0, &num, sizeof(long));
        num = (long) num;
        printf("value: %ld (%ld decimal value)\n", num, num);
        
    }
    else if (strcmp("longlong", &type)==0){
        read(0, &num, sizeof(long long));
        num = (long long) num;
        printf("value: %lld (%lld decimal value)\n", num, num);
        
    }
    else if (strcmp("short",&type)==0){
        read(0, &num, sizeof(short));
        num = (short) num;
        printf("value: %d (%d decimal value)\n", num, num);
    }
    else if (strcmp("char", &type)==0){
        read(0, &num, sizeof(char));
        num = (char) num;
        printf("value: %c (%d decimal value)\n", num, num);
    }
    else {
        read(0, &num, sizeof(int));
        num = (int) num;
        printf("value: %d (%d decimal value)\n", num, num);
    }
	return 0;	
}
