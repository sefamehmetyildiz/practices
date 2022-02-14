#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    //fputs --> toplu yazma
    //fgets --> toplu alma
    
    FILE *dosya;
    char karakter[50];
    dosya = fopen("C:\\Users\\Sefa Mehmet\\Desktop\\Yeni.txt", "r");

    fgets(karakter, 20, dosya); //fgets(atanacak değişken , alınacak karakter sayısı , nereden alınacak)
    puts(karakter);
    fclose(dosya);
    getch();
    return 0;
}