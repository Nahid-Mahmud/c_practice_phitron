#include <stdio.h>

int main()
{
    int user_input;
    scanf("%d", &user_input);
    for (int i = 1; i <= user_input; i++)
    {
        if (user_input % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}