#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int primeNum(int);
	int num = 0;
	printf("请输入一个整数：\n");
	scanf("%d", &num);

	if ((primeNum(num) == num ) && (num != 0))
	{
		printf("num is prime.\n ");
	}
	else
	{
		printf("num is not prime.\n");
	}
	return 0;
}
int primeNum(int n)
{

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return n;
}

