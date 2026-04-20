#include <stdio.h>
#include <string.h>>

int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        int y;
        scanf("%d", &y);
        if (y == 0)
        {
            printf("0");
        }
        while (y != 0)
        {
            printf("%d ", y % 10);
            y = y / 10;
        }
        printf("\n");
    }

    return 0;
}