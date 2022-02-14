#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct kayit
{
    char name[20];
    int class;
    int no;
    float mark;
};
struct kayit ogr;

int main(int argc, char const *argv[])
{
    printf("Name: ");
    scanf("%s", &ogr.name);
    printf("Class: ");
    scanf("%d", &ogr.class);
    printf("NO: ");
    scanf("%d", &ogr.no);
    printf("Mark: ");
    scanf("%f", &ogr.mark);

    printf("%s\n", ogr.name);
    printf("%d\n", ogr.class);
    printf("%d\n", ogr.no);
    printf("%.2f", ogr.mark);

    getch();
    return 0;
}