#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PI 3.14

// ����һ���ṹ�����洢�ܳ������
typedef struct {
    float circumference;
    float volume;
} CylinderProperties;
// �������ڼ���ĺ���
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

    // ���ú������ֱ�洢�ܳ������
    CylinderProperties props = caculation(r, h);

    // ��ӡ�ܳ������
    printf("%f %f\n", props.circumference, props.volume);

    return 0;
}




