#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // ����һ��4x6��ʵ������
    float scores[4][6];
    int i, j;

    // ����ɼ�
    printf("����������ѧ�����ſγ̵ĳɼ���\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%f", &scores[i][j]);
        }
    }

    // ���ԭʼ�ɼ����ݣ�3x5��
    printf("ԭʼ�ɼ����ݣ�\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%6.0f", scores[i][j]);
        }
        printf("\n");
    }

    // ����ÿ��ѧ����ƽ���ɼ���������������һ��
    for (i = 0; i < 3; i++) {
        float sum = 0;
        for (j = 0; j < 5; j++) {
            sum += scores[i][j];
        }
        scores[i][5] = sum / 5; // ����ƽ���ֲ��洢
    }

    // ���㵥�Ƶĳɼ��ܺͲ�������������һ��
    for (j = 0; j < 5; j++) {
        float sum = 0;
        for (i = 0; i < 3; i++) {
            sum += scores[i][j];
        }
        scores[3][j] = sum;
    }

    // ���������������飨4x6��
    printf("������������飺\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf("%6.1f", scores[i][j]);
        }
        printf("\n");
    }

    // ���㵥��ƽ���ɼ������
    printf("����ƽ���ɼ���\n");
    for (j = 0; j < 5; j++) {
        printf("%6.1f", scores[3][j] / 3);
    }
    printf("\n");

    return 0;
}