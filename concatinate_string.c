#include <stdio.h>
#include <string.h>
int main()
{
    char a[101];
    char b[101];

    scanf("%s %s", &a, &b);

    // manual
    // int lent_a = strlen(a);
    // int lent_b = strlen(b);

    // for (int i = 0; i <= lent_b; i++)
    // {
    //     a[i + lent_a] = b[i];
    // }

    // builtin func

    strcat(a, b);

    printf("%s", a);

    return 0;
}