#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �۰���Һ���
int binarySearch(int arr[], int n, int target) 
{
    int low = 0;
    int high = n - 1;
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) 
        {
            return mid + 1; // ����������0��ʼ�����Է���ֵҪ��1
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
    return -1; // δ�ҵ�
}

//ѡ������
 void sort(int *p,int n)
{
    //ѡ������
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
     //ð������
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
    
    //���벿��
    printf("�����������е����Ԫ��:\n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &arr[i]);
    }

    //�Ƚ������Ԫ�ش�С��������
    sort(p,20);

    //��ӡ��������
    printf("����������Ϊ��\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%-4d", p[i]);
    }
    printf("\n");

    //������Ҫ���ҵ�����
    printf("��������Ҫ���ҵ�Ԫ�أ�\n");
    scanf("%d",&target);

    //��ȡ��������
    result = binarySearch(arr, 20, target);

    if (result != -1) 
    {
        printf("�����������е�%d��Ԫ�ء�\n", result);
    }
    else 
    {
        printf("�޴�����\n");
    }

    return 0;
}