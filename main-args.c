#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  printf("%d\n", argc);
  while(argc--) {
    printf("%d\n", argc);
    printf("%s\n", *argv++);
  }
  return 0;
}
