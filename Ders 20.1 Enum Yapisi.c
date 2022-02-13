#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

enum cities      //enum yapısı ile sıralama işlemlerinde bilginin kaçıncı sırada olduğunu öğrenebeliriz.
{
    hatali,
    adana,
    adiyaman,
    afyon,
    agri,
    amasya,
    ankara,
    antalya,
    aydin,
    artvin,
    balikesir
};

int main(int argc, char const *argv[])
{
    enum cities plaka;

    plaka = ankara;
    printf("Plakaniz: %d", plaka);

    getch();
    return 0;
}