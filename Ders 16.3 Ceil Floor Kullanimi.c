#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    double number, bottomresult, topresult;
    printf("Please Enter Number: ");
    scanf("%lf", &number);

    bottomresult = floor(number);
    printf("Bottom Result: %.lf", bottomresult);
    printf("\n");
    topresult = ceil(number);
    printf("Top Result: %.lf", topresult);

    getch();
    return 0;
}