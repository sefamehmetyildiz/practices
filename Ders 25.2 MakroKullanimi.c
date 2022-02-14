#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define Maksimum(s1,s2) (s1>s2) ? s1 : s2  
 // maksimum(değişken1,değişken2) (istenen şart) ?->sorgulama : -> değilse      sağlarsa s1 değilse s2 yazdır.

int main(int argc, char const *argv[])
{
    printf("%d",Maksimum(2,7));

    getch();
    return 0;
}