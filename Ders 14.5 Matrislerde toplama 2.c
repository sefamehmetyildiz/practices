#include <stdio.h>
#include <stdlib.h>

int main(){

int satir,sutun,i,j,k,l,x,y;

printf("Satir sayisini giriniz: ");
scanf("%d",&satir);

printf("Sutun sayisini giriniz: ");
scanf("%d",&sutun);

int m1[satir][sutun];

for(i=0;i<satir;i++)
{
	for(j=0;j<sutun;j++)
	{
		printf("[%d][%d]---> ",i+1,j+1);
		scanf("%d",&m1[i][j]);
	}
}
printf("\n");

int m2[satir][sutun];
for(k=0;k<satir;k++)
{
	for(l=0;l<sutun;l++)
	{
		printf("[%d][%d]---> ",k+1,l+1);
		scanf("%d",&m2[k][l]);	
	}
}
printf("\n");
int toplam[2][2];
for(x=0;x<satir;x++)
{
	for(y=0;y<sutun;y++)
	{
		toplam[x][y]=m1[x][y]+m2[x][y];
		printf("%d ",toplam[x][y]);
	}
	printf("\n");
}

return 0;

}
