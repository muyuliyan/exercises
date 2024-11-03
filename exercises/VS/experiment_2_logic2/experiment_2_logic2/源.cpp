#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // 包含数学函数的头文件
#define PI 3.14

int main() {
    double angle_in_radians; // 用于存储角度（弧度制）
    double x; // 用于存储角度（角度制）
    double z; // 用于存储需要计算对数的数字
    double sin_value; // 用于存储正弦值
    double log_value; // 用于存储自然对数值
    double e_value;// 用于存储根号e次方结果
    double pow_value;// 用于存x的y次方结果
    double y;
    double result;// 存储结果

    // 提示用户输入角度（角度制）或作为log参数
    printf("Enter an x in degrees: ");
    scanf("%lf", &x);

    // 将角度转换为弧度
    angle_in_radians = x * PI / 180.0;

    // 提示用户输入一个数字
    printf("Enter a z to compute its natural logarithm: ");
    scanf("%lf", &z);

    // 提示用户输入pow计算的参量
    printf("Enter a y for pow: ");
    scanf("%lf", &y);

    // 排布结果 
    sin_value = sin(angle_in_radians);
    log_value = log(x) / log(z);
    e_value = exp(x / 2.0);
    pow_value = pow(x, y);

    // 输出结果
    result = sin_value + log_value + e_value + pow_value;
    printf("the result is :%lf", result);

    return 0;
}