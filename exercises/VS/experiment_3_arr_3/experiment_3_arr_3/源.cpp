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


	//��������
	while (1)
	{
		printf("������һ��2��10֮���������");
		scanf("%d", &row);
		if (row > 2 && row < 10)
		{
			break;
		}
		else
		{
			printf("��������밴Ҫ������������\n");
		}
    }

	//�����������
	printf("������n*n��������\n");
	for (int i = 0; i < row ; i++)
	{
		for ( int j = 0; j < row ; j++)
		{
			scanf("%d ", &a[i][j]);
		}		
	}

	//��ӡ�������
	printf("�������������������\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}

	//��ֵ��С����
	max = a[0][0];
	min = a[0][0];
	max_row = 0;
	min_row = 0;



	//�������ֵ
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (a[i][j] == max)
			{
				printf("���ڶ����ͬ���֣���������Ԫ�غ���������ֻ�����һ�����Ԫ������������\n��������⣬�������������Ԫ�ء�\n");
			}
			if (a[i][j] > max)
			{
				max = a[i][j];
				max_row = i;
			}
		}
	}
	printf("����Ԫ���ǣ�%d,���ڵ�%d�С�\n", max, max_row);

	//������Сֵ
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (a[i][j] == max)
			{
				printf("���ڶ����ͬ���֣���������Ԫ�غ���������ֻ�����һ����СԪ������������\n��������⣬�������������Ԫ�ء�\n");
			}
			if (a[i][j] < min)
			{
				min = a[i][j];
				min_row = i;
			}
		}
	}
	printf("��С��Ԫ���ǣ�%d,���ڵ�%d�С�\n", min, min_row);

	//˵��ͬ�����
	if (max_row == min_row)
	{
		printf("���Ԫ�غ���СԪ����ͬһ��,�޷��Ե���\n");
		return 0;
	}

	//�Ե���С��
	for (int i = 0; i < row; i++)
	{
		b[i] = a[max_row][i];
		a[max_row][i] = a[min_row][i];
		a[min_row][i] = b[i];
	}

	//���´�ӡ�������
	printf("���ǶԵ���ĵ���������\n");
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
