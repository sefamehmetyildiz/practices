#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int sayi;
    int fakto = 1;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    while(sayi>1)
    {
        fakto = fakto*sayi;
        sayi--;
    }
        printf("faktoriyel: %d",fakto);
    getch();
    return 0;
}