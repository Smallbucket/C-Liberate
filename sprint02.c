#include <stdio.h>

int main()
{
    char a = 'a';
    char buf[80];
    sprintf(buf, "The ASCII code of a is %d.", a);
    printf("%s", buf);
}
