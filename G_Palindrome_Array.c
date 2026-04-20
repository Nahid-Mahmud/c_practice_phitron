#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {

        arr2[i] = arr[n - 1 - i];
    }

    int is_pal = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr2[i])
        {
            is_pal = 1;
            break;
        }
    }

    if (is_pal == 1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}