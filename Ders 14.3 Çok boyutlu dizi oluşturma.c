#include <stdio.h>
#include <stdlib.h>

int main(){

int satir,sutun,i,j,k,l;

printf("Satir sayisini giriniz: ");
scanf("%d",&satir);

printf("Sutun sayisini giriniz: ");
scanf("%d",&sutun);

int matris[satir][sutun];

for(i=0;i<satir;i++)
{
	for(j=0;j<sutun;j++)
	{
		printf("[%d][%d]---> ",i+1,j+1);
		scanf("%d",&matris[i][j]);
	}
}
printf("\n");
for(k=0;k<satir;k++)
{
	for(l=0;l<sutun;l++)
	{
		printf("%d ",matris[k][l]);
	}
	printf("\n");
}



return 0;

}
