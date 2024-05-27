#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void Usage(char * param){
	printf("This program needs integer number/s as input parameter/s. It will write binary format.\n");
}
	
int main(int argc, char **argv){
	int i;
	int num;
	
	if (argc == 1){
		Usage(argv[0]);
		return 1;
	}


	if (strcmp(argv[1], "long")==0) {
		for (i=2; i<argc; i++){
                	num = (long) atol(argv[i]);
                	write(1, &num, sizeof(long));
        	}

	}

	else if (strcmp(argv[1], "longlong")==0) {
                for (i=2; i<argc; i++){
                        num = (long long) atoll(argv[i]);
                        write(1, &num, sizeof(long long));
                }

        }
	else if(strcmp(argv[1],"char")==0){
                for (i=2; i<argc; i++){
                        num = (char) atol(argv[i]);
                        write(1, &num, sizeof(char));
                }
    }
	else if (strcmp(argv[1],"short")==0){
		for (i=2; i<argc; i++){
                        num = (short) atol(argv[i]);
                        write(1, &num, sizeof(short));
                }
}

	else {
		for (i=2; i<argc; i++){
			num = (int) atoi(argv[i]);
			write(1, &num, sizeof(int));
		}
	}
	return 0;
}
