#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int first_digit = x / 10;
    int last_digit = x % 10;

    // if (last_digit == 0)
    // {
    //     printf("YES");
    // }
    // else
    if (last_digit % first_digit == 0 || first_digit % last_digit == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}