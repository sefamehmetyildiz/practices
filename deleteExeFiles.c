#include <dirent.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    DIR *d;
    struct dirent *dir;
    d = opendir(".");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            if (
                dir->d_name[strlen(dir->d_name) - 3] == 'e' 
                && dir->d_name[strlen(dir->d_name) - 2] == 'x'
                && dir->d_name[strlen(dir->d_name) - 1] == 'e')
            {
                remove(dir->d_name);
            }
        }
        closedir(d);
    }

    getch();
    return 0;
}