#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char **argv){
        int i, max, num, ret, fd;
        fd = open(argv[1],O_RDONLY);
        max = atoi(argv[2]);
        for (i=0; i<max; i++){
                ret = read(fd,&num,sizeof(int));
                write(1,&num,ret);
        }
        close(fd);
}
