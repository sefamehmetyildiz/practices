#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    char source[40] = "Hello Balikesir";
    char copy[40] = "";

    strcpy(copy, source);      // strcpy(nereye,nereden) karakter taşıma
    printf("%s", copy);

    // strncpy(copy, source, 7);  // strncpy(nereye,nereden,kaç karakter) karakter taşıma
    // printf("%s", copy);

    getch();
    return 0;
}