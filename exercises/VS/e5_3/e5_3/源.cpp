#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

void newcopy(char* ol, char* ne) {
    int i = 0, j = 0;
    while (ol[i] != '\0') { 
        if ((ol[i] >= 'A' && ol[i] <= 'Z') || ol[i] == ' ') { // ֻ���ƴ�д��ĸ
            ne[j++] = ol[i];
        }
        i++;
    }
    ne[j] = '\0'; // ȷ�����ַ����Կ��ַ�����
}

void print(char* ne) {
    int i = 0;
    printf("This is the new string:\n");
    while (ne[i] != '\0') {
        printf("%c", ne[i]); // ��ӡ�ַ����������ַ���ASCIIֵ
        i++;
    }
    printf("\n"); // ���ַ�����������
}

int main() {
	//�����ַ������洢��ַ
	char _old[] = "If I Can Stop Qne Heart From Breaking";
	char _new[50] = "";
	char* o = _old;
	char* n = _new;

	//���ú�������
	newcopy(o , n);

	//������
	print(n);

	return 0;
}