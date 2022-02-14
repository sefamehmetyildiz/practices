#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    FILE *dosya;
    char veri1[20]="Bilgisayar";
    char veri2[20]="Muhendisligi";
    char veri3[20]="Bolumu";
    dosya = fopen("C:\\Users\\Sefa Mehmet\\Desktop\\Yeni.txt", "w");

    fputs(veri1,dosya);
    fputs(veri2,dosya);
    fputs(veri3,dosya);

    getch();
    return 0;
}