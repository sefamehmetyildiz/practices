#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    FILE *dosya;
    char karakter;
    dosya = fopen("C:\\Users\\Sefa Mehmet\\Desktop\\Yeni.txt", "r");
    do
    {
        karakter = getc(dosya);
        printf("%c", karakter);
    } while (karakter != EOF);
    fclose(dosya);

    getch();
    return 0;
}