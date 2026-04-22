#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char s[101];
        scanf("%s", s);
        int str_length = strlen(s);
        if (str_length > 10)
        {
            printf("%c%d%c\n", s[0], str_length - 2, s[str_length - 1]);
        }
        else
        {
            printf("%s\n", s);
        }
    }

    return 0;
}