#include<stdio.h>

int main()
{
int line=0;
int i=0;
int j=0;
int k=0;
printf("please enter the line num u need:\n");

scanf("%d",&line);
for(k=1;k<=line;k++)
{
    for(i=1;i<=line-k;i++)
    {
        printf(" ");
    }
    //处理右对齐
    for(j=1;j<=k;j++)
    {
        printf("*");
    }
    //处理*个数
    printf("\n");
    //分行
}
return 0;
}