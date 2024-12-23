#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int gcd_value;
int mul_value;

void gcd(int, int);
void mul(int, int);

int main(){
    int a, b;

    printf("Please enter a and b:");
    scanf("%d %d", &a, &b);

    if (a == 0 && b == 0) {
        printf("They don't have the Greatest Common Divisor and Least Common Multiple.\n");
        return 0;
    }

    gcd(a, b); // 计算最大公约数
    mul(a, b);

    printf("Their Greatest Common Divisor is:%d\n", gcd_value);
    printf("Their Least Common Multiple is:%d\n", mul_value);

    return 0;
}

// 计算最大公约数_递归方法
void gcd(int t, int s) {
    if (s == 0) {
        gcd_value = t; // 当s为0时，将t赋值给全局变量gcd_value
    }
    else {
        gcd(s, t % s); // 递归调用，更新s和t的值
    }
}

// 计算最小公倍数
void mul(int m, int n) {
    mul_value = (m * n) / gcd_value; // 使用全局变量gcd_value计算LCM，并赋值给全局变量mul_value
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
