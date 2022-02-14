#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int sayi, sayi2;
    double sayi3 = 10.25;
    char kelime[5]="aaa";
    sayi = 10;
    sayi2 = 60;

    printf("%d\n", sayi);
    printf("%d\n", sayi2);
    printf("%f\n", sayi3);
    printf("%s", kelime);

    printf("\n\n  Bellek Adresi \n\n");

    printf("%x\n", &sayi);
    printf("%x\n", &sayi2);
    printf("%x\n", &sayi3);
    printf("%x", &kelime);

    getch();
    return 0;
}