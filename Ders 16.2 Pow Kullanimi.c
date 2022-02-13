#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int x, y, result;

    printf("TABAN: ");
    scanf("%d", &x);
    printf("US: ");
    scanf("%d", &y);

    result = pow(x, y);
    printf("Result: %d", result);

    getch();
    return 0;
}