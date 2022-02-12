#include <stdio.h>
#include <stdlib.h>

int main(){

int sayi1,sayi2,sonuc;
char islem;

sayi1=10;
sayi2=5;

printf("Yapilacak Islemi Giriniz: ");
scanf("%s",&islem);

switch(islem)
{
		
	case '+':
	sonuc=sayi1+sayi2;
	printf("Sonuc: %d",sonuc);break;
	
	case '-':
	sonuc=sayi1-sayi2;
	printf("Sonuc: %d",sonuc);break;
	
	case '/':
	sonuc=sayi1/sayi2;
	printf("Sonuc: %d",sonuc);break;
	
	case '*':
	sonuc=sayi1*sayi2;
	printf("Sonuc: %d",sonuc);break;
	
	default:printf("Hatali Islem Sembolu");

			
}
return 0;

}

