#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/* operator ==> 
  && -> ve 
  || veya 
  == e�ittir 
  != e�it de�ildir 
  < k���kt�r 
  > b�y�kt�r 
  <= k���l e�ittir 
  >= b�y�k e�ittir.
  % mod�l, modulus
  */
	
	float suderecesi;
	
	printf("******MADDE HALI BULMA******");
	printf("\n\n");
	printf("Su Derecesini Giribiz: ");
	scanf("%f",&suderecesi);
	
	if(suderecesi<=0)
	printf("Su Buz Halinde");
	
	if(suderecesi>0 && suderecesi<100)
	printf("Su Sivi Halinde");
	
	if(suderecesi>=100)
	printf("Su Buhar Halinde");
return 0;

}
