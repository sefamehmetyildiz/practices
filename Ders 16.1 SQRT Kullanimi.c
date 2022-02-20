#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{

    int number;
    double result;

    printf("Please Enter Number: ");
    scanf("%d", &number);

    result = sqrt(number); // karekök alma
    printf("%.4f", result);
    // %.4f olarak yazarsak virgülden sonra 4 basamak alır.
    getch();
    return 0;
}