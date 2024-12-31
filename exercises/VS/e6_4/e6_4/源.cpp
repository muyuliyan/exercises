#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> // �����ַ����ຯ��

// ��������
void filtercopy(const char* source_filename, const char* target_filename);

int main() {
    const char* source_filename = "source.txt";
    const char* target_filename = "target.txt";

    // ���ú���
    filtercopy(source_filename, target_filename);

    // ��ӡ�ɹ���Ϣ
    printf("�ļ���%s�ɹ����ƣ�\n", target_filename);

    return 0;
}

// ��������
void filtercopy(const char* source_filename, const char* target_filename) {
    FILE* source_file, * target_file;
    int ch;

    // ��Դ�ļ�
    source_file = fopen(source_filename, "r");
    if (source_file == NULL) {
        perror("�޷���Դ�ļ�");
        return;
    }

    // ����Ŀ���ļ�
    target_file = fopen(target_filename, "w");
    if (target_file == NULL) {
        perror("�޷�����Ŀ���ļ�");
        fclose(source_file);
        return;
    }

    // ��ȡԴ�ļ�������Ӣ����ĸ�����ֵ�Ŀ���ļ�
    while ((ch = fgetc(source_file)) != EOF) {
        if (isalpha(ch) || isdigit(ch)) {
            fputc(ch, target_file);
        }
    }

    // �ر��ļ�
    fclose(source_file);
    fclose(target_file);
}