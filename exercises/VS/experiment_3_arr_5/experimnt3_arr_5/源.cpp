#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void aver(float (*g)[6], int m)
{
	for (int i = 0; i < 3; i++)
	{
		float sum = 0;
		float average = 0;
		for (int j = 0; j < 5; j++)
		{
			sum += g[i][j];
		}
		average = sum / m;
		g[i][5] = average;
	}
}

void all_sum(float (*s)[6], int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		float sum = 0;
		for (int j = 0; j < m; j++)
		{
			sum += s[j][i];
		}
		s[3][i] = sum;
	}
}

void ever_aver(float (*e)[6], int n)
{
	printf("ÿ�Ƶ�ƽ���ɼ�:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%6.1f", e[3][i] / n);
	}
	printf("\n");
}

int main()
{
	float grade[4][6];
	int i, j;
	float (*p)[6] = grade;
	grade[3][5] = { 0 };

	//����ԭʼ����
	printf("������ԭʼ���ݣ�\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%f", &grade[i][j]);
		}
	}

	//���ԭʼ����
	printf("Input:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%8.0f", grade[i][j]);
		}
		printf("\n");
	}

	//�������ƽ��ֵ
	aver(p, 5);

	//����ÿ���ܳɼ�
	all_sum(p, 3, 5);

	//���ƽ��ֵ��Ӻ������
	printf("Output��\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 6; j++)
		{
			/*if (i == 3 && j == 5)
			{
				printf("%.0f",grade[i][j]);
				break;
			}*/
			printf("%8.1f", grade[i][j]);
		}
		printf("\n");
	}

	//����ÿ�Ƶ�ƽ���ɼ�
	ever_aver(p, 3);

	return 0;
}