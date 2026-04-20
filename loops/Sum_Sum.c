#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum_of_positive_numbers = 0;
    int sum_of_negative_numbers = 0;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            sum_of_positive_numbers += arr[i];
        }
        if (arr[i] < 0)
        {
            sum_of_negative_numbers += arr[i];
        }
    }

    printf("%d %d", sum_of_positive_numbers, sum_of_negative_numbers);

    return 0;
}