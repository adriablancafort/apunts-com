#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

union person_data {
	char name[256];
	int age;
};

void Usage(char * param){
	printf("This program needs pairs of strings and integers\n");
}

int main(int argc, char **argv){
	int i,j;
	if (argc == 1){
		Usage(argv[0]);
		return 1;
	}
	
	else if (argc%2 != 1){
		Usage(argv[0]);
		return 1;
	}

	union person_data people[argc/2];

	for (i=0; i<argc/2; i++){
		for (j=0; j<sizeof(argv[i*2+1]); j++){
			people[i].name[j] = argv[i*2+1][j];
		}
		people[i].age = (int) atoi(argv[2*i+2]);
	}

	for (i=0; i<argc/2; i++){
		printf("Person %d: %s %d\n", i+1, people[i].name, 
people[i].age);
	}
	return 0;
}
