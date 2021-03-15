#include <stdio.h>

int main()
{
  FILE *fp;
  fp = fopen("/home/evasafe/C-Liberate/test", "w");
  fprintf(fp, "My test file.");
  fclose(fp);
}
