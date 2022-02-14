#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int kupbul(int sayi)
{
    int kup;
    kup = sayi * sayi * sayi;
    return kup;
}
int main(int argc, char const *argv[])
{
    int s;
    printf("Kupu alinacak sayi: ");
    scanf("%d", &s);
    printf("Sonuc: %d", kupbul(s));

    getch();
    return 0;
}