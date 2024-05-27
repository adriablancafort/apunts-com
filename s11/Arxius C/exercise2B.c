#include <omp.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
char buf[256];
#pragma omp parallel num_threads(atoi(argv[1]))
{
int thid = omp_get_thread_num();
sprintf(buf, "Hello I am thread %d!\n",thid);
write(1, buf, strlen(buf));
}
}
