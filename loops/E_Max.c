#include <stdio.h>
#include <limits.h>
int main()
{
    int total_input;
    int max = INT_MIN;
    scanf("%d", &total_input);

    for (int i = 1; i <= total_input; i++)
    {
        int x;

        scanf("%d", &x);
        if (x > max)
        {
            max = x;
        }
        else
        {
            continue;
        }
    }
    printf("%d", max);

    return 0;
}