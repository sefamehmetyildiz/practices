#include <stdio.h>
#include <stdlib.h>

int main(){

int sayi,faktoriyel;
faktoriyel=1;
sayi=5;

while(sayi>1)
{
faktoriyel=faktoriyel*sayi;
sayi--;	
	
}

printf("%d",faktoriyel);

return 0;

}
