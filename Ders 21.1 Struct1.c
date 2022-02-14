#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct bookInformation
{
    char bookName[40];
    char writer[40];
    int price;
    float point;
};

int main(int argc, char const *argv[])
{
    struct bookInformation bI = {"SekerPortakali", "Vasconceulos", 10, 7.25};
    printf("BOOK NAME: %s\n", bI.bookName);
    printf("WRITER: %s\n", bI.writer);
    printf("PRICE: %d\n", bI.price);
    printf("POINT: %.2f", bI.point);

    getch();
    return 0;
}