#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int divide(int x, int y, int divisor)
{
    if (x % 3 == 1 && y % 3 == 1)
    {
        printf(" ");
        return 1;
    }
    else
    {
        if (divisor / 3 == 0)
        {
            printf("*");
            return 0;
        }
        else
        {
            return divide(x / 3, y / 3, divisor / 3);
        }
    }
}

int main()
{
    int count;
    scanf("%d", &count);
    for (int x = 0; x < count; x++)
    {
        for (int y = 0; y < count; y++)
        {
            divide(x, y, count);
        }
        printf("\n");
    }
    return 0;
}