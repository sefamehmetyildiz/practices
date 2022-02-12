#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int bagajagirligi,elagirligi,tutar,bagajfazlasi,elfazlasi;
	
	printf("Bagaj Agirligini Giriniz: ");
	scanf("%d",&bagajagirligi);
	
	printf("El Agirligini Giriniz: ");
	scanf("%d",&elagirligi);
	
	bagajfazlasi=bagajagirligi-15;
	elfazlasi=elagirligi-8;
	tutar=(bagajfazlasi+elfazlasi)*5;
	
	printf("Tutar: %d",tutar);
	
return 0;

}
