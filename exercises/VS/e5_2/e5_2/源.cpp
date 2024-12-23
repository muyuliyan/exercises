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
	//初始化原数组
	int arr[6] = {1, 3, 5, 7, 9};
	int n = 0;
	int* p = arr;
	int* q = &n;

	//输入任意整数
	printf("Please enter the num.\n");
	scanf("%d" , q);

	//打印原数组
	printf("原数组：\n");
	print(p , 5);

	//比较插入排序
	sort(p , 5, q);

	//打印排序数组
	printf("排序数组：\n");
	print(p , 6);

	return 0;
}