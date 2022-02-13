#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    double degree, resultSin, resultCos;

    printf("Please Enter Degree: ");
    scanf("%lf", &degree);

    resultSin = sin(degree);
    resultCos = cos(degree);

    printf("Cos%.lf: %lf", degree, resultCos);
    printf("\n");
    printf("Sin%.lf: %lf", degree, resultSin);
    
    getch();
    return 0;
}