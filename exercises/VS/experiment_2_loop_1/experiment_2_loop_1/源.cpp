#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �������ڽ�ʮ������ת��Ϊ�˽���
void decimalToOctal(int decimal) {
    int octal = 0;
    int remainder;
    int index = 1;

    // ����0���������
    if (decimal == 0) {
        printf("0");
        return;
    }

    while (decimal != 0) {
        remainder = decimal % 8;
        octal += remainder * index;
        index *= 10;
        decimal /= 8;
    }

    // ��ת���ֲ���ӡ
    while (index != 1) {
        printf("%d", octal / index);
        octal %= index;
        index /= 10;
    }
    printf("%d", octal);
}

// �������ڽ�ʮ������ת��Ϊʮ������
void decimalToHexadecimal(int decimal) {
    int hexadecimal = 0;
    int remainder;
    int index = 1;
    char hexDigits[] = "0123456789ABCDEF";

    // ����0���������
    if (decimal == 0) {
        printf("0");
        return;
    }

    while (decimal != 0) {
        remainder = decimal % 16;
        hexadecimal += remainder * index;
        index *= 16;
        decimal /= 16;
    }

    // ��ת���ֲ���ӡ
    while (index != 1) {
        printf("%c", hexDigits[(hexadecimal / index) % 16]);
        hexadecimal %= index;
        index /= 16;
    }
    printf("%c", hexDigits[hexadecimal]);
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    printf("Octal equivalent: ");
    decimalToOctal(decimalNumber);
    printf("\n");

    printf("Hexadecimal equivalent: ");
    decimalToHexadecimal(decimalNumber);
    printf("\n");

    return 0;
}
//octal - ���ڴ洢��������еİ˽�������
//remainder - �洢�ڳ��������е����������ڻ�ȡ��ǰλ�İ˽��ƻ�ʮ���������֡�
//index - �����ڼ�������и��ٵ�ǰλ��Ȩ�أ���8���ݻ�16���ݣ���
//hexDigits - һ���ַ����飬������ʮ�����Ʊ�ʾ��ʹ�õ����ֺ���ĸ��0 - 9��A - F����
//hexadecimal - ���ڴ洢��������е�ʮ����������
//decimalNumber - �û������ʮ������������ת��Ϊ�˽��ƺ�ʮ�����ơ�