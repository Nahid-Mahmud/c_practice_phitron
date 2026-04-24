#include <stdio.h>
#include <string.h>
int main()
{
    char a[101];
    char b[101];

    scanf("%s %s", a, b);

    int result = strcmp(a, b);

    if (result == 0)
    {
        printf("Equal");
    }
    else if (result < 0)
    {
        printf("A is smaller");
    }
    else
    {
        printf("B is smaller");
    } 

    return 0;
}