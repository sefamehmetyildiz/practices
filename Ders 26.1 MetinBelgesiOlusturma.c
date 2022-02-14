#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    // input--> giriş
    // output--> çıkış
    // file--> dosya / f
    // put--> yazdırma
    // get--> okuma
    // read--> okuma / r
    // write--> yazma / w
    // open--> açma
    // close--> kapama
    // add--> ekleme / a

    FILE *dosya;
    dosya=fopen("C:\\Users\\Sefa Mehmet\\Desktop\\Yeni.txt","w");

    // fopen açma komutu sondaki w ise dosyanın formatı 

    getch();
    return 0;
}