#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int arr[20] = { 0 };
    int target, mid, sz;
    sz = sizeof(arr) / sizeof(arr[0]);

    //���벿��
    printf("�����������е����Ԫ��:\n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &arr[i]);
    }

    //����
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

    //��ӡ
    printf("��������ú�����飺\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%-4d",arr[i]);
    }
    printf("\n");

    //����Ҫ���ҵ���
    printf("��������Ҫ���ҵ�����");
    scanf("%d", &target);

    //����
    int low = 0;
    int high = sz - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            printf("�ҵ��ˣ���������ڵ�%dλ��\n",mid + 1); // ����������0��ʼ�����Է���ֵҪ��1
            return 0;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    //������
    if (low > high)
    {
        printf("�Ҳ�����\n");
    }

	return 0;
}