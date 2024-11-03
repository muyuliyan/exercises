#include<stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    for (i = 2; i <= 6; i++)
    {
        for (j = 2; j <= 6; j++)
        {
            printf("%d*%d=%d ", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}