#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    char nameAndSurname[] = "Sefa Mehmet Yildiz";

    printf("your short nick: %c.", nameAndSurname[0]);

    int size = sizeof(nameAndSurname) / sizeof(nameAndSurname[0]);
    for (int i = 0; i < size; i++)
    {
        if (nameAndSurname[i]==' ')
        {
            printf("%c.",nameAndSurname[i+1]);
        }
        
    }

    getch();
    return 0;
}