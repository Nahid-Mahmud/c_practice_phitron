#include <stdio.h>

int main()
{
    int array[5];

    for (size_t i = 0; i < 5; i++)
    {
        array[i] = i + 2;
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}