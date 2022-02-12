#include <stdio.h>
#include <stdlib.h>

int main(){

int sayi;

printf("Bir Sayi Giriniz: ");
scanf("%d",&sayi);

switch(sayi){

case 1:printf("Haftanin 1.Gunu Pazartesidir");break;
case 2:printf("Haftanin 2.Gunu Salidir");break;
case 3:printf("Haftanin 3.Gunu Carsambadir");break;
case 4:printf("Haftanin 4.Gunu Persembedir");break;
case 5:printf("Haftanin 5.Gunu Cumadir");break;
case 6:printf("Haftanin 6.Gunu Cumartesidir");break;
case 7:printf("Haftanin 7.Gunu Pazardir");break;

default:printf("Hatali Numara Girisi");
			
}
return 0;

}
