#include <stdio.h>
#include <string.h>
int main()
{
    char str1[11];
    char str2[11];

    scanf("%s", str1);
    scanf("%s", str2);

    int lent_of_str1 = strlen(str1);
    int lent_of_str2 = strlen(str2);
    printf("%d %d\n", lent_of_str1, lent_of_str2);
    printf("%s%s\n", str1, str2);

    char temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;

    printf("%s %s", str1, str2);

    return 0;
}