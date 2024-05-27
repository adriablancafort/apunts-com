#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int fdin, key, fdout;
	char c;
	
	fdin = open(argv[1], O_RDONLY);
	fdout = open(argv[3], O_WRONLY|O_CREAT|O_TRUNC, 0666);
	key=atoi(argv[2]);
	while(read(fdin, &c, 1)){
		c+=key;
		write(fdout, &c, 1);
	}
	close(fdin);
	return 0;
}
