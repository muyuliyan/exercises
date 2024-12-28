#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

void newcopy(char* ol, char* ne) {
    int i = 0, j = 0;
    while (ol[i] != '\0') { 
        if ((ol[i] >= 'A' && ol[i] <= 'Z') || ol[i] == ' ') { // 只复制大写字母
            ne[j++] = ol[i];
        }
        i++;
    }
    ne[j] = '\0'; // 确保新字符串以空字符结束
}

void print(char* ne) {
    int i = 0;
    printf("This is the new string:\n");
    while (ne[i] != '\0') {
        printf("%c", ne[i]); // 打印字符，而不是字符的ASCII值
        i++;
    }
    printf("\n"); // 在字符串结束后换行
}

int main() {
	//定义字符串并存储地址
	char _old[] = "If I Can Stop Qne Heart From Breaking";
	char _new[50] = "";
	char* o = _old;
	char* n = _new;

	//调用函数处理
	newcopy(o , n);

	//输出结果
	print(n);

	return 0;
}