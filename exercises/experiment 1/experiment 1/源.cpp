#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*1. float a = 12345.6789e3;
	float n = 0;
	n = a + 10;
	printf("%f %f\n", a, n);*/
	/*2. int x = 0, y = 0;
	printf("%d %d %d %d %d\n", !x, !(!!x + !!y), x > y, !x > y, x > y ? x > 5 ? x : 5 : y > 6 ? y : 6);*/
	/*3. int x = 0, y = 0;
	scanf("%d %d", &x, &y);
	printf("%d %d %d\n", y *= 8 - (y -= ++x), x, y);*/
	//++x���ȼ�����-=
	 int a=0, b=0, c=0, i=0, j=0, k=0;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &i, &j, &k);
	(a = i < j) && (b = j > k) && (c = i, j, k);
	printf("%d %d %d %d %d %d", a, b, c, i, j, k);
	//�߼�������� && ���ж�·���ԣ��������һ�����ʽ�Ľ��Ϊ�٣�0�����򲻻��������ı��ʽ��
	return 0;
}