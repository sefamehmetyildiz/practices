#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    FILE *dosya;
    dosya=fopen("C:\\Users\\Sefa Mehmet\\Desktop\\Yeni.txt","w");

    putc('a',dosya);
    putc('\n',dosya);
    putc('b',dosya);

    fclose(dosya);

    getch();
    return 0;
}