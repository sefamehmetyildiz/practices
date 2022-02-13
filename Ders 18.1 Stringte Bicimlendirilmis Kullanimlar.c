#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    char book[40];
    printf("Name: ");
    scanf("%s",&book);

    printf("%s",book);  //direkt kitabı yazdırır
    printf("\n");

    printf("%18s",book);  // belleği 18 karaktere düşürür ve kitabın ismini yazar
    printf("\n");

    printf("%20.5s",book);  //belleği 20 karakter yapar ve kitabın ilk 5 karakterini alarak yazdırır.
    
    getch();
    return 0;
}