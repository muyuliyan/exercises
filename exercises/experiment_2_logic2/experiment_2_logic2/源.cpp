#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // ������ѧ������ͷ�ļ�
#define PI 3.14

int main() {
    double angle_in_radians; // ���ڴ洢�Ƕȣ������ƣ�
    double x; // ���ڴ洢�Ƕȣ��Ƕ��ƣ�
    double z; // ���ڴ洢��Ҫ�������������
    double sin_value; // ���ڴ洢����ֵ
    double log_value; // ���ڴ洢��Ȼ����ֵ
    double e_value;// ���ڴ洢����e�η����
    double pow_value;// ���ڴ�x��y�η����
    double y;
    double result;// �洢���

    // ��ʾ�û�����Ƕȣ��Ƕ��ƣ�����Ϊlog����
    printf("Enter an x in degrees: ");
    scanf("%lf", &x);

    // ���Ƕ�ת��Ϊ����
    angle_in_radians = x * PI / 180.0;

    // ��ʾ�û�����һ������
    printf("Enter a z to compute its natural logarithm: ");
    scanf("%lf", &z);

    // ��ʾ�û�����pow����Ĳ���
    printf("Enter a y for pow: ");
    scanf("%lf", &y);

    // �Ų���� 
    sin_value = sin(angle_in_radians);
    log_value = log(x) / log(z);
    e_value = exp(x / 2.0);
    pow_value = pow(x, y);

    // ������
    result = sin_value + log_value + e_value + pow_value;
    printf("the result is :%lf", result);

    return 0;
}