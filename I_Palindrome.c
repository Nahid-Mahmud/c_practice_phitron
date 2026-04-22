#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int str_len = strlen(s);
    int is_pal = 1;
    for (int i = 0, j = str_len - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            is_pal = 0;
            break;
        }
    }

    if (is_pal != 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}