#include <stdio.h>
#include <stdlib.h>

int main(){

int sayilar[]={5,15,20,35};
int i;
int toplam=0;

for(i=0;i<4;i++)
{
	toplam=toplam+sayilar[i];	
}
printf("%d\n",toplam);

return 0;

}
