#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 函数用于将十进制数转换为八进制
void decimalToOctal(int decimal) {
    int octal = 0;
    int remainder;
    int index = 1;

    // 处理0的特殊情况
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

    // 反转数字并打印
    while (index != 1) {
        printf("%d", octal / index);
        octal %= index;
        index /= 10;
    }
    printf("%d", octal);
}

// 函数用于将十进制数转换为十六进制
void decimalToHexadecimal(int decimal) {
    int hexadecimal = 0;
    int remainder;
    int index = 1;
    char hexDigits[] = "0123456789ABCDEF";

    // 处理0的特殊情况
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

    // 反转数字并打印
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
//octal - 用于存储计算过程中的八进制数。
//remainder - 存储在除法操作中的余数，用于获取当前位的八进制或十六进制数字。
//index - 用于在计算过程中跟踪当前位的权重（即8的幂或16的幂）。
//hexDigits - 一个字符数组，包含了十六进制表示中使用的数字和字母（0 - 9和A - F）。
//hexadecimal - 用于存储计算过程中的十六进制数。
//decimalNumber - 用户输入的十进制数，用于转换为八进制和十六进制。