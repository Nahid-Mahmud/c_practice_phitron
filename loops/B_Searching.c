#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int position = -1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // take the number to determine position on the array
    int number;
    scanf("%d", &number);

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == number)
        {
            position = i;
            break;
        }
    }

    printf("%d\n", position);

    return 0;
}