#include <stdio.h>
#include <stdlib.h>

int main(){

//int dizi[sat�r][s�t�n]; tablo gibi d���n�n.

int dizi[2][2];

dizi[0][0]=10;
dizi[0][1]=20;
dizi[1][0]=30;
dizi[1][1]=40;

printf("%d                %d\n",dizi[0][0],dizi[0][1]);
printf("%d                %d",dizi[1][0],dizi[1][1]);


return 0;

}
