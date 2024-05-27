#include <omp.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int var;
#pragma omp parallel num_threads(atoi(argv[1])) shared(var)
{
  #pragma omp for
  for (int i=0; i<10; i++) {
    #pragma omp critical
    {
      var = i;
    sleep(1); //this function blocks the thread execution for 1 second
    printf("Msg: iterator %d; Var %d; by Thread %d\n", i, var, omp_get_thread_num());
  }
  }
}
}
