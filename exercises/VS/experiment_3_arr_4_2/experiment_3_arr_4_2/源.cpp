#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[20] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39 };
	int target;
	int low,high,mid,sz,result;

	sz = sizeof(arr) / sizeof(arr[0]);

	//����Ŀ������
	printf("����������Ҫ���ҵ����֣�");
	scanf("%d", &target);

	//��ʼ�����ұ���
	low = 0;
	high = sz - 1;
	
	//�۰����
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		if (arr[mid] == target)
		{
			result = mid + 1;
			printf("�ҵ��˸����֣����ǵ�%dλ����", result);
			break;
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

	if (low > high)
	{
		printf("�Ҳ�����");
	}
	return 0;
}