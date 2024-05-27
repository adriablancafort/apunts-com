#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main (int argc, char **argv)
{
  char buf[100];
  int ret;

  ret = read (0, &buf, sizeof (buf));
  while (ret > 0){
      write (1, &buf, ret);
      ret = read (0, &buf, sizeof (buf));
  }
}
