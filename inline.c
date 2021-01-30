// C program to demonstrate inline keyword
#include <stdio.h>

inline int maximum(int a, int b) {
  return a > b ? a : b;
}

int main() {
  int x = 5, y = 10;
  printf("Maximum of %d and %d is %d", x, y, maximum(x, y));

  return 0;
}
