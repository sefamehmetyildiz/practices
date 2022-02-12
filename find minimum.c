#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{

    int arr[] = {34, 15, 88, 2};
    int minimum = arr[0];
    size_t size=sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    printf("%d", minimum);

    getch();
    return 0;
}