#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    char str[100];
    int offset =0;
    int i=0;
    srand(time(0));  // *随机种子
    for(i = 0;i<10;i++)
    {
        offset+=sprintf(str+offset,"%s,",rand()%100);  // 格式化的数据写入字符串
    }
    str[offset-1]='\n';
    printf('%s\n', str);
    return 0;
}
