#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int sayi = 20;
    int *s = &sayi;   // s karakterine sayi nin adresini atadık.

    // sayıyı ekrana yazdırma
    printf("Deger: %d\n", sayi);

    // adresi ekrana yazdırma
    printf("Adres: %x", s);

    getch();
    return 0;
}