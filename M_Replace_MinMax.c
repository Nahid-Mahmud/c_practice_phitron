#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int max = INT_MIN;
    int max_index = n - 1;
    int min_index = 0;
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i == max_index)
        {
            arr[i] = min;
        }

        if (i == min_index)
        {
            arr[i] = max;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}