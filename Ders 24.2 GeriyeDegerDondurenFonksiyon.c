#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int islem(int s1 , int s2)
{
    int sonuc;
    sonuc=(s1+s2)*5-10;
    return sonuc;              //geriye döndürülecek değişkeni belirledik

}
int main(int argc, char const *argv[])
{
    int t;
    t=islem(4 , 5);
    printf("%d\n",t);

    t=islem(2 , 3);
    printf("%d",t);

    getch();
    return 0;
}