#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 折半查找函数
int binarySearch(int arr[], int n, int target) 
{
    int low = 0;
    int high = n - 1;
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) 
        {
            return mid + 1; // 数组索引从0开始，所以返回值要加1
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
    return -1; // 未找到
}

//选择排序
 void sort(int *p,int n)
{
    //选择排序
     int i, j, k, t;
     for ( i = 0; i < n - 1; i++)
     {
         k = i;
         for ( j = i + 1; j < n; j++)
         {
             if (p[j]<p[k])
             {
                 k = j;
             }
             if (k != i)
             {
                 t = p[i];
                 p[i] = p[k];
                 p[k] = t;
             }
         }
     }
     //冒泡排序
     /*for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n - i -1; j++)
         {
             if (p[j] > p[j + 1])
             {
                int z = 0;
                z = p[j];
                p[j] = p[j + 1];
                p[j + 1] = z;
             }
         }
     }*/
}

int main() 
{
    int * p;
    int arr[20] = { 0 };
    int result,target;
    p = arr;
    
    //输入部分
    printf("请输入数组中的随机元素:\n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &arr[i]);
    }

    //先将输入的元素从小到大排序
    sort(p,20);

    //打印检验排序
    printf("排序后的数组为：\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%-4d", p[i]);
    }
    printf("\n");

    //输入需要查找的数字
    printf("请输入需要查找的元素：\n");
    scanf("%d",&target);

    //调取函数查找
    result = binarySearch(arr, 20, target);

    if (result != -1) 
    {
        printf("该数是数组中第%d个元素。\n", result);
    }
    else 
    {
        printf("无此数。\n");
    }

    return 0;
}