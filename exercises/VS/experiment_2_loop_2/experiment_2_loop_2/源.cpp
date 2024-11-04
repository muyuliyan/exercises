#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int s = 0;
	int result = 0;

	printf("Please enter the value: ");
	scanf("%d",&n);

	//program execution part
	for (int i = 1; i <= n; i++)
	{
		int j = 0;
		int r = 1;
		//initialize the value
		for ( j =1 ; j <= i; j++)
		{
			r *= j;
		}
		result = pow((-1), i + 1) * r;
		s += result;
	}
	
	printf("\nHere is the result:%d\n", s);

	return 0;
}