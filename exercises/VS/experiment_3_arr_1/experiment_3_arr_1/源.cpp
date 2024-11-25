#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int arr[10];
    printf("Please enter ten numbers.\n");
    // 输入数字并打印它们
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("These are the numbers you have entered:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n"); // 添加换行以改善输出格式

    // 初始化最大值和最小值及其下标
    int Max = arr[0];
    int MaxIndex = 0;
    int Min = arr[0];
    int MinIndex = 0;

    // 寻找最大值和最小值及其下标
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
    // 打印最大值和最小值及其下标
    printf("The max number is: %d at index %d\n", Max, MaxIndex);
    printf("The min number is: %d at index %d\n", Min, MinIndex);
    return 0;
}