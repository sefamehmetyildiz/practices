#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int su,kola,misir,tutar;
	
	printf("*******FIYAT LISTESI*******\n\n Misir: 2TL\n Su: 1TL\n Kola: 5TL\n\n********************\n\n\n ");
	
	printf("Su Adedini Giriniz: ");
	scanf("%d",&su);
	
	printf(" Kola Adedini Giriniz: ");
	scanf("%d",&kola);
	
	printf(" Misir Adedini Giriniz: ");
	scanf("%d",&misir);	
	
	
	tutar=su*1+kola*5+misir*2;
	printf("Tutar: %dTL",tutar);
	
return 0;

}
