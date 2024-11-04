#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 定义swap函数，需要传地址解引用
void swap(int *a,int *b)
{
	int c = 0;
	c=*a;
	*a = *b;
	*b = c;
}
int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	printf("please enter the data：");
	scanf("%d %d %d", &x, &y, &z);

	int arr[] = { x,y,z };// 定义数组
	int n = sizeof(arr)/sizeof(arr[0]);// 计算字符长度

	
	for(int i=0;i<2;i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}

	// 输出结果
	printf("The sorting result of this data is: %d %d %d\n ",arr[0],arr[1],arr[2]);
}