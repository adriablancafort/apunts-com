#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv){
    int result;
    if (strcmp("+",argv[2]) == 0) result=atoi(argv[1])+atoi(argv[3]);
    else if (strcmp("-",argv[2]) == 0) result=atoi(argv[1])-atoi(argv[3]);
    else if (strcmp("*",argv[2]) == 0) result=atoi(argv[1])*atoi(argv[3]);
    else result=atoi(argv[1])/atoi(argv[3]);
    printf("The result is %d \n",result);
    return 0;
}
