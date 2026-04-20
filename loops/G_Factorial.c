#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        int y;
        long long int factorial = 1;
        scanf("%d", &y);
        while (y > 0)
        {
            /* code */
            factorial = factorial * y;
            y = y - 1;
        }

        printf("%lld\n", factorial);
    }
    return 0;
}