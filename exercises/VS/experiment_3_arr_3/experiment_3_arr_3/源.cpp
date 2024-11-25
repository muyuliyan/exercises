#define MAX_SIZE 10
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	int row = 0;
	int a[MAX_SIZE][MAX_SIZE];
	int b[MAX_SIZE];
	int max ,min ;
	int max_row, min_row;


	//输入行数
	while (1)
	{
		printf("请输入一个2到10之间的整数：");
		scanf("%d", &row);
		if (row > 2 && row < 10)
		{
			break;
		}
		else
		{
			printf("输入错误，请按要求输入整数！\n");
		}
    }

	//输入数组矩阵
	printf("请输入n*n个整数：\n");
	for (int i = 0; i < row ; i++)
	{
		for ( int j = 0; j < row ; j++)
		{
			scanf("%d ", &a[i][j]);
		}		
	}

	//打印数组矩阵
	printf("这是你输入的整数矩阵：\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}

	//赋值大小数组
	max = a[0][0];
	min = a[0][0];
	max_row = 0;
	min_row = 0;



	//查找最大值
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (a[i][j] == max)
			{
				printf("存在多个相同数字，最后输出的元素和行数可能只是最后一个最大元素与其行数。\n如果有问题，请调整您的输入元素。\n");
			}
			if (a[i][j] > max)
			{
				max = a[i][j];
				max_row = i;
			}
		}
	}
	printf("最大的元素是：%d,它在第%d行。\n", max, max_row);

	//查找最小值
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (a[i][j] == max)
			{
				printf("存在多个相同数字，最后输出的元素和行数可能只是最后一个最小元素与其行数。\n如果有问题，请调整您的输入元素。\n");
			}
			if (a[i][j] < min)
			{
				min = a[i][j];
				min_row = i;
			}
		}
	}
	printf("最小的元素是：%d,它在第%d行。\n", min, min_row);

	//说明同行情况
	if (max_row == min_row)
	{
		printf("最大元素和最小元素在同一行,无法对调。\n");
		return 0;
	}

	//对调大小行
	for (int i = 0; i < row; i++)
	{
		b[i] = a[max_row][i];
		a[max_row][i] = a[min_row][i];
		a[min_row][i] = b[i];
	}

	//重新打印数组矩阵
	printf("这是对调后的的整数矩阵：\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
