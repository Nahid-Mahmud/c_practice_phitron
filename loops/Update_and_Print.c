#include <stdio.h>

int main()
{
    int n;
    int x;
    int v;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &x, &v);

    for (int i = 0; i < n; i++)
    {
        if (i == x)
        {
            arr[i] = v;
        }
        else
        {
            continue;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}