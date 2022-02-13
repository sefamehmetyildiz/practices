#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    char information[100];

    printf("Write Information: ");
    gets(information);
    printf("\n\n");
    puts(information);

//scanf fonksiyonunda boşluktan sonra girilen bilgiler alınmıyor fakat gets puts fonksiyonları bize bu imkanı sağlıyor

    getch();
    return 0;
}