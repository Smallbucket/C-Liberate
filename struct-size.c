#include <stdio.h>

struct test {
  int one;
  int two;
  char *str;
  float flt;
};

int main()
{
  printf("Struct's size is %ld.\n", sizeof(struct test));
  return 0;
}
