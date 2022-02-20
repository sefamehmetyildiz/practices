#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//scanf te sadece tek kelime çýktý alabiliriz. Eðer 2 kelime yazarsak ilk kelimeyi çýktý olarak verir//
	
	char ad[20],soyad[20],sehir[20],meslek[20];
	
	printf("Adiniz: ");
	scanf("%s",ad);
	
	printf("Soyadiniz: ");
	scanf("%s",soyad);
	
	printf("Sehiriniz: ");
	scanf("%s",sehir);
	
	printf("Mesleginiz: ");
	scanf("%s",meslek);

	printf("\n\n\n");
	printf("*******KISI BILGILERI*******\n\n\n");
	printf("Adi: %s \n",ad);
	printf("Soyadi: %s \n",soyad);
	printf("Sehiri: %s \n",sehir);
	printf("Meslek: %s \n\n\n",meslek);
	printf("*****************************");
	
	
	
	return 0;
	
}
