#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �۰���Һ���
int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid + 1; // ����������0��ʼ�����Է���ֵҪ��1
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1; // δ�ҵ�
}

int main() {
    int arr[20] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39 };
    int target, result;

    printf("������Ҫ���ҵ�����");
    scanf("%d", &target);

    //��ȡ��������
    result = binarySearch(arr, 20, target);

    if (result != -1) {
        printf("�����������е�%d��Ԫ�ء�\n", result);
    }
    else {
        printf("�޴�����\n");
    }

    return 0;
}