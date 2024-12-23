#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int gcd(int, int);
int mul(int, int, int);

int main()
{
	int a, b,gcd_value;

	printf("Please enter a and b:");
	scanf("%d %d", &a, &b);

    gcd_value = gcd(a, b); // 计算最大公约数

    printf("Their Greatest Common Divisor is:%d\n", gcd_value);
    printf("Their Least Common Multiple is:%d\n", mul(a, b, gcd_value));

	return 0;
}

//// 计算最大公约数_常规方法
//int gcd(int t, int s) {
//    int temp;
//    while (s != 0) {
//        temp = s;
//        s = t % s;
//        t = temp;
//    }
//    return t;
//}

// 计算最大公约数_递归方法
int gcd(int t, int s) {
    if (s == 0) {
        return t; // 当s为0时，返回t作为GCD
    }
    else {
        return gcd(s, t % s); // 递归调用，更新s和t的值
    }
}

// 计算最小公倍数
int mul(int m, int n, int l) {
    return m / l * n; // 使用公式计算LCM
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


