#include <stdio.h>

int main()
{
    int n;
    long long int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        sum = sum + a;
    }

    if (sum <= 0)
    {
        sum = -sum;
    }

    printf("%lld\n", sum);

    return 0;
}