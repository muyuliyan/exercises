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

    gcd(a, b); // �������Լ��
    mul(a, b);

    printf("Their Greatest Common Divisor is:%d\n", gcd_value);
    printf("Their Least Common Multiple is:%d\n", mul_value);

    return 0;
}

// �������Լ��_�ݹ鷽��
void gcd(int t, int s) {
    if (s == 0) {
        gcd_value = t; // ��sΪ0ʱ����t��ֵ��ȫ�ֱ���gcd_value
    }
    else {
        gcd(s, t % s); // �ݹ���ã�����s��t��ֵ
    }
}

// ������С������
void mul(int m, int n) {
    mul_value = (m * n) / gcd_value; // ʹ��ȫ�ֱ���gcd_value����LCM������ֵ��ȫ�ֱ���mul_value
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
