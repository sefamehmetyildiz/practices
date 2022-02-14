#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef int deger1;              // deger1 int değişkeni gibi kullanıldı.

int main(int argc, char const *argv[])
{

    deger1 sayi1;
    deger1 sayi2;
    deger1 toplam;
    sayi1 = 20;
    sayi2 = 40;
    toplam = sayi1 + sayi2;

    printf("Toplam= %d", toplam);

    getch();
    return 0;
}