#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char ch;
    char arr[] = "Nothing was too difficult";
    int sz = sizeof(arr) / sizeof(arr[0]) - 1; // ��1����Ϊ�ַ����Ľ�����'\0'��Ӧ�ñ���������

    printf("Enter a character to search for: ");
    scanf("%c", &ch); // ��ȡһ���ַ�

    int found = 0; // ���ڱ���Ƿ��ҵ���ƥ����ַ�

    for (int i = 0; i < sz; i++)
    {
        if (ch == arr[i])
        {
            printf("It's at index: %d\n", i);
            found = 1; // ����ҵ���ƥ����ַ�
            // ��������ҵ�����ƥ����ַ�λ�ã�����ע�͵������break���
            break; // �ҵ�����˳�ѭ��
        }
    }

    if (!found) // ���û���ҵ�ƥ����ַ�
    {
        printf("We don't find the character '%c'\n", ch);
    }

    return 0;
}


