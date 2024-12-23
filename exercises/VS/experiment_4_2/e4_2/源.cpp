#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() 
{
    int computNum(int );
    int num = 0;

    printf("请输入一个正整数：");
    scanf("%d", &num);

    printf("该正整数的各位数字之和是：%d\n", computNum(num));
    return 0;
}


//循环式
//int computNum(int n)
//{
//    int sum = 0;
//    int t = 0;
//    while (n > 0)
//    {
//        t = n % 10;
//        sum += t;
//        n /= 10;
//    }
//    return sum;
//}

//递归式
int computNum(int n)
{
    int sum = 0;
    if (n > 0)
    {
        sum = n % 10;
        n /= 10;
        sum += computNum(n);
    }
    return sum;
}