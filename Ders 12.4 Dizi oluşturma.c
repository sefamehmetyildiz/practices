#include <stdio.h>
#include <stdlib.h>

int main(){

int dizi[100];
int i,sayi;


printf("Eleman Sayisi: ");
scanf("%d",&sayi);

for(i=0;i<sayi;i++)
{
	printf("Dizinin %d.Degerini Giriniz: ",i+1);
	scanf("%d",&dizi[i]);
}

printf("\n\n");

for(i=0;i<sayi;i++)
{	
	printf(" %d ",dizi[i]);
}

return 0;

}
