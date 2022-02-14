#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    char harf='a';
    char*pt=&harf;

    printf("Adres1 : %x\n", pt);
    pt++;                           //adresi 1 arttır
    printf("Adres2 : %x\n", pt);
    pt--;                           //adresi 1 azalt
    printf("Adres3 : %x", pt);

    getch();
    return 0;
}