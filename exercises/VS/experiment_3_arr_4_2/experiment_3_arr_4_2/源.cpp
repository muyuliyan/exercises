#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[20] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39 };
	int target;
	int low,high,mid,sz,result;

	sz = sizeof(arr) / sizeof(arr[0]);

	//输入目标数字
	printf("请输入您想要查找的数字：");
	scanf("%d", &target);

	//初始化查找变量
	low = 0;
	high = sz - 1;
	
	//折半查找
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		if (arr[mid] == target)
		{
			result = mid + 1;
			printf("找到了该数字，它是第%d位数字", result);
			break;
		}
		else if (arr[mid] < target)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	if (low > high)
	{
		printf("找不到。");
	}
	return 0;
}