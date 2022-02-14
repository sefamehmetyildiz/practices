#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define puan 2.19
#define puan2 1.23

int main(int argc, char const *argv[])
{
    int turkce,mat;
    float sonuc;

    printf("Turkce Netiniz: ");
    scanf("%d",&turkce);
    printf("Mat Netiniz: ");
    scanf("%d",&mat);

    sonuc=turkce*puan+mat*puan2+51.25;
    printf("Puaniniz: %.3f",sonuc);

    getch();
    return 0;
}