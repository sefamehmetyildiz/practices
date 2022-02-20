#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    FILE *dosya;
    char karakter;
    dosya = fopen("C:\\Users\\Sefa Mehmet\\Desktop\\Ders 1.1 Hello World.cpp", "r");

    do
    {
        karakter = getc(dosya);
        printf("%c", karakter);
    } while (karakter != EOF);
    fclose(dosya);

    FILE *dosya2;
    dosya2 = fopen("C:\\Users\\Sefa Mehmet\\Desktop\\Ders 1.1 Hello World.c", "w");
    //putc(karakter, dosya2);
    fputs(karakter, dosya2);
    
    fclose(dosya2);

    getch();
    return 0;
}