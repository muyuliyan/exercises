#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int arr[20] = { 0 };
    int target, mid, sz;
    sz = sizeof(arr) / sizeof(arr[0]);

    //输入部分
    printf("请输入数组中的随机元素:\n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &arr[i]);
    }

    //排序
    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int z = 0;
                z = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = z;
            }
        }
    }

    //打印
    printf("这是排序好后的数组：\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%-4d",arr[i]);
    }
    printf("\n");

    //输入要查找的数
    printf("请输入你要查找的数：");
    scanf("%d", &target);

    //查找
    int low = 0;
    int high = sz - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            printf("找到了，这个数字在第%d位。\n",mid + 1); // 数组索引从0开始，所以返回值要加1
            return 0;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    //错误处理
    if (low > high)
    {
        printf("找不到。\n");
    }

	return 0;
}