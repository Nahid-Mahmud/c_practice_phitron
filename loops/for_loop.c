// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int j = 0;

    for (int i = 0; i <= 100000; i++)
    {
        j = j + i;
    }

    printf("sum is = %d\n", j);

    return 0;
}