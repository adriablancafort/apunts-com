#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void Usage(char * param){
	printf("This program needs integer number/s as input parameter/s. It will write binary format.\n");
}
	
int main(int argc, char **argv){
	int i1, i2;
	float num1, num2, result;

	if (argc != 3) {
		Usage(argv[0]);
		return 1;
	}

	i1 = (int) atoi(argv[1]);
	num1 = (float) i1;
	i2 = (int) atoi(argv[2]);
	num2 = (float) i2;
	result = num1/num2;
	write(1, &result, sizeof(float));

	return 0;	
}
