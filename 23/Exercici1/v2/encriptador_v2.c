#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "key.h"

int main(int argc, char **argv){
	int fdin, key;
	char c;
	
	fdin = open(argv[1], O_RDONLY);
	key = getKey();
	while(read(fdin, &c, 1)){
		c+=key;
		write(1, &c, 1);
	}
	close(fdin);
	return 0;
}
