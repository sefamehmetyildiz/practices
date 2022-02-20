#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int j, i, l, k;
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (i = 6; i >= j; i--)
        {
            printf(" ");
        }
        for (j = 6; j >= i; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (k = 1; k < 7; k++)
    {
        for (l = 6; l >= k; l--)
        {
            printf("*");
        }
        for (k = 1; k <= l; k++)
        {
            printf(" ");
        }
        for (l = 1; l <= k; l++)
        {
            printf(" ");
        }
        for (l = 6; l >= k; l--)
        {
            printf("*");
        }

        printf("\n");
    }

    getch();
    return 0;
}