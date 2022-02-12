#include <stdio.h>
#include <stdlib.h>

int main(){

int i,j,en,boy;

printf("En degerini giriniz: ");
scanf("%d",&en);

printf("Boy degerini giriniz: ");
scanf("%d",&boy);


for(i=1;i<=boy;i++)
{
	for(j=1;j<=en;j++)
	{
		printf("*");
	}
	printf("\n");
}

return 0;

}
