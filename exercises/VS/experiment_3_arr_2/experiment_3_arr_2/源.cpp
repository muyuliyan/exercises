#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char ch;
    char arr[] = "Nothing was too difficult";
    int sz = sizeof(arr) / sizeof(arr[0]) - 1; // 减1是因为字符串的结束符'\0'不应该被计算在内

    printf("Enter a character to search for: ");
    scanf("%c", &ch); // 读取一个字符

    int found = 0; // 用于标记是否找到了匹配的字符

    for (int i = 0; i < sz; i++)
    {
        if (ch == arr[i])
        {
            printf("It's at index: %d\n", i);
            found = 1; // 标记找到了匹配的字符
            // 如果你想找到所有匹配的字符位置，可以注释掉下面的break语句
            break; // 找到后就退出循环
        }
    }

    if (!found) // 如果没有找到匹配的字符
    {
        printf("We don't find the character '%c'\n", ch);
    }

    return 0;
}


