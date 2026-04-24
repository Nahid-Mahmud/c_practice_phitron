#include <stdio.h>

int main()
{
    // first takeing input for how many numbers and 1--to m
    int n, m;
    scanf("%d %d", &n, &m);

    // taking user input numbers to check frequency
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int fre[100001] = {0};

    for (int i = 0; i < n; i++)
    {

        fre[a[i]]++;
    }

    // printf("%d %d %d", fre[0], fre[1], fre[2]);

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", fre[i]);
    }

    return 0;
}