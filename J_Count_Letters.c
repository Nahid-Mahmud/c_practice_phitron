#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001];
    scanf("%s", &s);
    int char_length = strlen(s);
    // printf("%s\n", s);
    // printf("%d\n", char_length);

    int fre[26] = {0};

    for (int i = 0; i < char_length; i++)
    {
        fre[s[i] - 'a']++;
    }

    for (int i = 0; i <= 26; i++)
    {
        if (fre[i] > 0)
        {
            // Convert index i back to the character (0 + 'a' = 'a')
            printf("%c : %d\n", i + 'a', fre[i]);
        }
    }

    return 0;
}