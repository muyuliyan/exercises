#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap(int *a,int *b)
{
	int z = 0;
	z = *a;
	*a = *b;
	*b = z;
	printf("We have swapped your numbers.\n");
}


int mulNum(int *a,int *b)
{
	if (*a < *b)
	{
		swap(a , b);
	}
	if (*a % *b == 0)
	{
		return 1;
	}
	
	return 0;
}

int main()
{
	int num1, num2;
	printf("please enter two numbers£º");
	scanf("%d %d",&num1,&num2);

	if (mulNum(&num1, &num2) == 1)
	{
		printf("%d is multiple of %d",num1,num2);
	}
	else
	{
		printf("%d is not multiple of %d", num1, num2);
	}

	return 0;
}