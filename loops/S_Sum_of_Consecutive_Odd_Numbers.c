#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        int first_number;
        int second_number;
        scanf("%d %d", &first_number, &second_number);
        if (first_number > second_number)
        {
            int temp = first_number;
            first_number = second_number;
            second_number = temp;
        }
        int sum = 0;
        for (int i = first_number + 1; i < second_number; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}