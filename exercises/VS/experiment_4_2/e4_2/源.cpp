#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() 
{
    int computNum(int );
    int num = 0;

    printf("������һ����������");
    scanf("%d", &num);

    printf("���������ĸ�λ����֮���ǣ�%d\n", computNum(num));
    return 0;
}


//ѭ��ʽ
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

//�ݹ�ʽ
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