#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PI 3.14

// 定义一个结构体来存储周长和体积
typedef struct {
    float circumference;
    float volume;
} CylinderProperties;
// 定义用于计算的函数
CylinderProperties caculation(float x, float y) {
    CylinderProperties props;
    props.circumference = 2 * PI * x;
    props.volume = PI * x * x * y;
    return props;
}

int main() {
    float r = 0;
    float h = 0;
    scanf("%f %f", &r, &h);

    // 调用函数并分别存储周长和体积
    CylinderProperties props = caculation(r, h);

    // 打印周长和体积
    printf("%f %f\n", props.circumference, props.volume);

    return 0;
}




