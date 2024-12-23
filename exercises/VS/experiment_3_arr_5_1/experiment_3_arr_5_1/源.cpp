#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 声明一个4x6的实型数组
    float scores[4][6];
    int i, j;

    // 输入成绩
    printf("请输入三个学生五门课程的成绩：\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%f", &scores[i][j]);
        }
    }

    // 输出原始成绩数据（3x5）
    printf("原始成绩数据：\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%6.0f", scores[i][j]);
        }
        printf("\n");
    }

    // 计算每个学生的平均成绩并填入数组的最后一列
    for (i = 0; i < 3; i++) {
        float sum = 0;
        for (j = 0; j < 5; j++) {
            sum += scores[i][j];
        }
        scores[i][5] = sum / 5; // 计算平均分并存储
    }

    // 计算单科的成绩总和并填入数组的最后一行
    for (j = 0; j < 5; j++) {
        float sum = 0;
        for (i = 0; i < 3; i++) {
            sum += scores[i][j];
        }
        scores[3][j] = sum;
    }

    // 输出填入结果后的数组（4x6）
    printf("填入结果后的数组：\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf("%6.1f", scores[i][j]);
        }
        printf("\n");
    }

    // 计算单科平均成绩并输出
    printf("单科平均成绩：\n");
    for (j = 0; j < 5; j++) {
        printf("%6.1f", scores[3][j] / 3);
    }
    printf("\n");

    return 0;
}