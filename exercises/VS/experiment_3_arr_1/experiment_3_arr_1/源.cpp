#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int arr[10];
    printf("Please enter ten numbers.\n");
    // �������ֲ���ӡ����
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("These are the numbers you have entered:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n"); // ��ӻ����Ը��������ʽ

    // ��ʼ�����ֵ����Сֵ�����±�
    int Max = arr[0];
    int MaxIndex = 0;
    int Min = arr[0];
    int MinIndex = 0;

    // Ѱ�����ֵ����Сֵ�����±�
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > Max)
        {
            Max = arr[i];
            MaxIndex = i;
        }
        if (arr[i] < Min)
        {
            Min = arr[i];
            MinIndex = i;
        }
    }
    // ��ӡ���ֵ����Сֵ�����±�
    printf("The max number is: %d at index %d\n", Max, MaxIndex);
    printf("The min number is: %d at index %d\n", Min, MinIndex);
    return 0;
}