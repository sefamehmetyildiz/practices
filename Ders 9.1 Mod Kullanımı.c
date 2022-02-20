#include <stdio.h>
#include <stdlib.h>

int main(){
	
int i;

for (i=1;i<=50;i++)
{
	if(i%5==0)
	{
		printf("%d\n",i);
	}
}

//-----------------------------------------------2.KODLAMA---------------------------------------------------------------

int sayi;
sayi=357;
int birler,onlar,yuzler;
printf("\n\n\n");
printf("------------------------");
printf("\n\n");

yuzler=sayi/100;
printf("%d",yuzler);
printf("\n\n");

onlar=sayi/10;
onlar=onlar%10;
printf("%d",onlar);
printf("\n\n");

birler=sayi%10;
printf("%d",birler);



return 0;

}
