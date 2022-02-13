#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    char bookName[40], writer[40], bookAndWriter[80];

    printf("Enter BookName And Writer: ");
    scanf("%s%s", &bookName, &writer);

    strcat(bookAndWriter, bookName); //bookAndWriter a bookName i ekliyor sonra sıra sıra diğerlerini ekliyoruzz.
    strcat(bookAndWriter, "<-->");
    strcat(bookAndWriter, writer);

    printf("\n\n");
    printf("%s", bookAndWriter);

    getch();
    return 0;
}