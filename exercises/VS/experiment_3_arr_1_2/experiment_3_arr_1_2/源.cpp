#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[20]; // 假设数组大小为20
    int count = 0;
    int i, max, min, maxIndex, minIndex, temp, inputFlag = 1;

    // 提示用户输入数组元素
    printf("请输入20个整数（输入-1结束）：\n");
    while (inputFlag) {
        for (i = 0; i < 20; i++) {
            scanf("%d", &temp);
            if (temp == -1) {
                inputFlag = 0; // 输入-1时结束输入
                break;
            }
            arr[i] = temp;
            count++;
        }
    }

    // 初始化最大值和最小值以及它们的位置
    max = arr[0];
    min = arr[0];
    maxIndex = 0;
    minIndex = 0;

    // 遍历数组，找出最大值和最小值及其位置
    for (i = 1; i < 20; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
        if (count == i + 1)
        {
            break;
        }
    }

    // 输出原始数组
    printf("原始数组元素为：");
    for (i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
        if (count == i + 1)
        {
            break;
        }
    }
    printf("\n");

    // 输出最大值及其位置
    printf("最大值：%d，位置：%d\n", max, maxIndex + 1);
    // 输出最小值及其位置
    printf("最小值：%d，位置：%d\n", min, minIndex + 1);

    return 0;
}