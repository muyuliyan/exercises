#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 折半查找函数
int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid + 1; // 数组索引从0开始，所以返回值要加1
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1; // 未找到
}

int main() {
    int arr[20] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39 };
    int target, result;

    printf("请输入要查找的数：");
    scanf("%d", &target);

    //调取函数查找
    result = binarySearch(arr, 20, target);

    if (result != -1) {
        printf("该数是数组中第%d个元素。\n", result);
    }
    else {
        printf("无此数。\n");
    }

    return 0;
}