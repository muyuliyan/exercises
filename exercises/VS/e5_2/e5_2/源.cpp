#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print(int* p,int n) {
	int i = 0;
	while (i < n) {
		printf("%d ", p[i]);
		i++;
	}
	printf("\n");
}

void sort(int* s, int n, int* q) {
	for (int i = 0; i < n; i++) {
		if (*q <= s[i]) {
			for (int j = n; j > i; j--) {
				s[j] = s[j - 1];
			}
			s[i] = *q;
			break;
		}
		else if (i == n - 1 && *q > s[n - 1]) {
			s[n] = *q;
		}
	}
}

int main(){
	//��ʼ��ԭ����
	int arr[6] = {1, 3, 5, 7, 9};
	int n = 0;
	int* p = arr;
	int* q = &n;

	//������������
	printf("Please enter the num.\n");
	scanf("%d" , q);

	//��ӡԭ����
	printf("ԭ���飺\n");
	print(p , 5);

	//�Ƚϲ�������
	sort(p , 5, q);

	//��ӡ��������
	printf("�������飺\n");
	print(p , 6);

	return 0;
}