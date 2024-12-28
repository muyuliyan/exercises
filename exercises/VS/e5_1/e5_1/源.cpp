#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	float aver(float* ,int );

	float arr[10];
	float* p = arr;
	
	//input
	printf("Please enter your value:\n");
	for (int i = 0; i < 10; i++)
	{
		//数组名只是数组首字母地址，各个数组元素的地址还是需要&
		scanf("%f",p+i);
	}

	//output
	printf("Their average value is:%.2f\n",aver(arr,10));

	return 0;
}

float aver(float* p,int n) 
{
	float sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += p[i];
	}

	return sum / n;
}

//1 3 5 7 9 11 13 15 17 19
//12 12 12 12 12 12 12 12 33 32