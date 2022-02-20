#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float mat,turkce,sosyal,fen,obp,puan;
	
	// türkçe ve mat : 3.3
	// fen ve sosyal : 3.4
	//taban puan 100
	//obp ortalaman*0.6
	
	printf("Matematik Netiniz: ");
	scanf("%f",&mat);
	
	printf("Turkce Netiniz: ");
	scanf("%f",&turkce);
	
	printf("Sosyal Netiniz: ");
	scanf("%f",&sosyal);
	
	printf("Fen Bilgisi Netiniz: ");
	scanf("%f",&fen);
	
	printf("Donem Ortalamaniz: ");
	scanf("%f",&obp);
	
	puan=(mat+turkce)*3.3+(fen+sosyal)*3.4+obp*0.6+100;
	
	printf("TYT Puaniniz: %f",puan);
	
	
return 0;

}
