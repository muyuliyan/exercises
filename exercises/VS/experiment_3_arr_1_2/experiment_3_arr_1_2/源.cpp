#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[20]; // ���������СΪ20
    int count = 0;
    int i, max, min, maxIndex, minIndex, temp, inputFlag = 1;

    // ��ʾ�û���������Ԫ��
    printf("������20������������-1��������\n");
    while (inputFlag) {
        for (i = 0; i < 20; i++) {
            scanf("%d", &temp);
            if (temp == -1) {
                inputFlag = 0; // ����-1ʱ��������
                break;
            }
            arr[i] = temp;
            count++;
        }
    }

    // ��ʼ�����ֵ����Сֵ�Լ����ǵ�λ��
    max = arr[0];
    min = arr[0];
    maxIndex = 0;
    minIndex = 0;

    // �������飬�ҳ����ֵ����Сֵ����λ��
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

    // ���ԭʼ����
    printf("ԭʼ����Ԫ��Ϊ��");
    for (i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
        if (count == i + 1)
        {
            break;
        }
    }
    printf("\n");

    // ������ֵ����λ��
    printf("���ֵ��%d��λ�ã�%d\n", max, maxIndex + 1);
    // �����Сֵ����λ��
    printf("��Сֵ��%d��λ�ã�%d\n", min, minIndex + 1);

    return 0;
}