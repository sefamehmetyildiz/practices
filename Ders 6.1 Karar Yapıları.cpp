#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float sinav1,sinav2,sinav3,ort;
	
	printf("1.SINAVI GIRINIZ: ");
	scanf("%f",&sinav1);
	
	printf("2.SINAVI GIRINIZ: ");
	scanf("%f",&sinav2);
	
	printf("3.SINAVI GIRINIZ: ");
	scanf("%f",&sinav3);	
	
	printf("\n\n");
	
	ort=(sinav1+sinav2+sinav3)/3;
	
	printf("ORTALAMANIZ: %f\n",ort);
	
if(ort>=50)
	{
		printf("Tebrikler Gectiniz");
	}
else
	{
		printf("Malesef Kaldiniz");
	}
return 0;

}
