#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int gcd(int, int);
int mul(int, int, int);

int main()
{
	int a, b,gcd_value;

	printf("Please enter a and b:");
	scanf("%d %d", &a, &b);

    gcd_value = gcd(a, b); // �������Լ��

    printf("Their Greatest Common Divisor is:%d\n", gcd_value);
    printf("Their Least Common Multiple is:%d\n", mul(a, b, gcd_value));

	return 0;
}

//// �������Լ��_���淽��
//int gcd(int t, int s) {
//    int temp;
//    while (s != 0) {
//        temp = s;
//        s = t % s;
//        t = temp;
//    }
//    return t;
//}

// �������Լ��_�ݹ鷽��
int gcd(int t, int s) {
    if (s == 0) {
        return t; // ��sΪ0ʱ������t��ΪGCD
    }
    else {
        return gcd(s, t % s); // �ݹ���ã�����s��t��ֵ
    }
}

// ������С������
int mul(int m, int n, int l) {
    return m / l * n; // ʹ�ù�ʽ����LCM
}

//int mul(int m,int n)
//{
//	int M = 0;
//
//	if (m > n)
//	{
//		M = m;
//	}
//
//	else
//	{
//		M = n;
//	}
//
//	for ( M ; M <= m*n ; M++)
//	{
//		if (M % m == 0 && M % n == 0)
//		{
//			return M;
//		}
//		else
//		{
//			continue;
//		}
//	}
//}
//
//int gcd(int t,int s)
//{
//	int S = 0;
//
//	if (s > t)
//	{
//		S = t;
//	}
//
//	else
//	{
//		S = s;
//	}
//
//	for (S; S > 0; S--)
//	{
//		if (s % S == 0 && t % S == 0)
//		{
//			return S;
//		}
//		else
//		{
//			continue;
//		}
//	}
//}


