#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max;
    int minimum;

    // max
    if (a >= b && a >= c)
    {
        max = a;
    }
    else if (b >= a && b >= c)
    {
        max = b;
    }
    else if (c >= a && c >= b)
    {
        max = c;
    }

    // min
    if (a <= b && a <= c)
    {
        minimum = a;
    }
    else if (b <= a && b <= c)
    {
        minimum = b;
    }
    else if (c <= a && c <= b)
    {
        minimum = c;
    }

    printf("%d %d", minimum, max);

    return 0;
}