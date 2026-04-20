#include <stdio.h>
int main()

{
    // for (int i = 1; i <= 10; i = i + 2)
    // {
    //     printf("%d\n", i);
    // }
    for (int i = 4; i <= 100; i = i + 1)
    {
        if (i % 4 == 0)
        {
            printf("%d\n", i);
        }
        else
        {
            continue;
        }
    }
    return 0;
}