#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    char word[50];

    printf("Enter Word: ");
    scanf("%s", &word);

    printf("String Length: %d", strlen(word));

    getch();
    return 0;
}