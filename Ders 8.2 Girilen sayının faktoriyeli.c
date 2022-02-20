#include <stdio.h>
#include <stdlib.h>

int main(){
	

int i,sayi;
int faktoriyel=1;

printf("Faktoriyeli alinacak sayi: ");
scanf("%d",&sayi);

for(i=1;i<=sayi;i++)
{
	faktoriyel=faktoriyel*i;
}

printf("Girdiginiz sayinin faktoriyeli : %d",faktoriyel);


return 0;

}
