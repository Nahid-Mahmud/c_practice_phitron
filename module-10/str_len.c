#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    fgets(arr, 100, stdin);
    printf("Original String: %s", arr);
    int str_len = strlen(arr);
    printf("String Length %d", str_len);
    return 0;
}