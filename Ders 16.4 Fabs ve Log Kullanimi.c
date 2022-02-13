#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    double number, mutlak, logaritma;

    printf("Please Enter Number: ");
    scanf("%lf", &number);

    mutlak = fabs(number);
    logaritma = log(number);

    printf("Logartima: %lf", logaritma);
    printf("\n");
    printf("Mutlak: %lf", mutlak);

    getch();
    return 0;
}