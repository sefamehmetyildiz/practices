#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    char text[] = "8 8 Bi fk8h B 8 BB8B B B  B888 c hl8 BhB fd";

    int size = sizeof(text) / sizeof(text[0]);
    int j=0;
    for (int i = 0; i < size; i++)
    {
        if (text[i] != ' ')
        {
           text[j++]=text[i];
        }
    }
    
    printf("%s",text);

    getch();
    return 0;
}