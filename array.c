#include <stdio.h>

int main()
{
  int array1[8]={0, 0, 0, 3, 0, 5, 0, 0};
  int array2[8]={[3]=3, [5]=5};
  int array3[8]={[2 ... 4]=1, [5 ... 7]=2};

  //printf("array is %d\n", array1);
}
