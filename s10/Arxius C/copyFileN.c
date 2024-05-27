#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char **argv){
        int i, N, max, ret, fd;
        fd = open(argv[1],O_RDONLY);
	N = atoi(argv[2]);
        int buf[N];
	max = atoi(argv[3]);
	for (i=0; i<max; i=i+N) {
        	ret = read(fd,&buf,sizeof(buf));
        	write(1,&buf,ret);
	}
        close(fd);
}