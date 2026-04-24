#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char a[n + 1];

    scanf("%s", a);

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        count = count + a[i] - '0';
    }
    printf("%d", count);

    return 0;
}