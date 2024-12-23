#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int combinNum(int a,int b)
{
	int factorial(int);
	int result = 0;

	result = factorial(a) / (factorial(b)*factorial(a - b));

	return result;
}

int factorial(int a)
{
	int fac = 1;
	for (int i = a; i > 0; i--)
	{
		fac *= i;
	}

	return fac;
}

int main()
{
	int m, n;

	//情况分类
	while (1)
	{
		printf("please enter two numbers m and n:");
		scanf("%d %d", &m, &n);
		if (m < n)
		{
			printf("Please ensure your m larger than n!\nOtherwise there are no combinations!\n");
			continue;
		}
		else if (m == n)
		{
			printf("There is 1 combination composed of these numbers.\n");
			return 0;
		}
		else
		{
			break;
		}
	}

	//调用函数计算
	printf("There is %d combinations composed of these numbers.\n",combinNum(m,n));

	return 0;
}