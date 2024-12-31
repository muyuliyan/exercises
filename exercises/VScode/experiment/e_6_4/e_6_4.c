#define _CRT_SECURE_NO_WARNINGS
// #include "source.txt"
#include <stdio.h>
#include <ctype.h> // 用于字符分类函数

// 函数声明
void filtercopy(const char* source_filename, const char* target_filename);

int main() {
    const char* source_filename = "source.txt";
    const char* target_filename = "target.txt";

    // 调用函数
    filtercopy(source_filename, target_filename);

    // 打印成功消息
    printf("文件：%s成功复制！\n", target_filename);

    return 0;
}

// 函数定义
void filtercopy(const char* source_filename, const char* target_filename) {
    FILE* source_file, * target_file;
    int ch;

    // 打开源文件
    source_file = fopen(source_filename, "r");
    if (source_file == NULL) {
        perror("无法打开源文件");
        return;
    }

    // 创建目标文件
    target_file = fopen(target_filename, "w");
    if (target_file == NULL) {
        perror("无法创建目标文件");
        fclose(source_file);
        return;
    }

    // 读取源文件并复制英文字母和数字到目标文件
    while ((ch = fgetc(source_file)) != EOF) {
        if (isalpha(ch) || isdigit(ch)) {
            fputc(ch, target_file);
        }
    }

    // 关闭文件
    fclose(source_file);
    fclose(target_file);
}