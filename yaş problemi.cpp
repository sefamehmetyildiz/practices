#include <stdio.h>

int
main ()
{

  int age;
  printf ("Enter your age: ");

  // Her zaman b�t�nc�l sorunlardan ba�lan�r. 
  // %d = decimal. Tam sayD1.
  // & = ampersant. ram'de ald��� yeri temsil eder.
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
  
  scanf ("%d", &age);
  

  
  
  if(age <= 0){
      printf("Lutfen pozitif tam sayi giriniz.");
  }else{
      
    if (age % 2 == 0){
      printf("Yasinizz cift\n");
  }else{
      printf("Yasinizz tek\n");
  }
      
  if(age > 0 && age <= 10)
  {
      printf("cocuksunuz.");
  }
  else if (age > 10 && age < 18)
    {
      printf ("Resit degilsin. Resit olmana %d yil var.", 18 - age);
    }
  else if(age >= 18)
    {
      printf ("Resitsin.\nYasiniz : %d", age);
    }
    
  }
  
    


  return 0;
}

