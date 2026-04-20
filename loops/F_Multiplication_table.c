#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 1; i <= 12; i++)
    {
        int res = i * x;
        printf("%d * %d = %d\n", x, i, res);
    }

    return 0;
}