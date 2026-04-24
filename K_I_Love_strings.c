#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char a[51], b[51];

        scanf("%s %s", a, b);

        // length of the chars
        int lent_a = strlen(a);
        int lent_b = strlen(b);
        int i;
        for (i = 0; i < lent_a && i < lent_b; i++)
        {
            printf("%c%c", a[i], b[i]);
        }

        if (i < lent_a)
        {
            for (; i < lent_a; i++)
            {
                printf("%c", a[i]);
            }
        }
        if (i < lent_b)
        {
            for (; i < lent_b; i++)
            {
                printf("%c", b[i]);
            }
        }

        printf("\n");
    }

    return 0;
}