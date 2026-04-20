#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    // scanf("%d", &a);
    // scanf("%f", &b);
    // scanf(" %c", &c);
    scanf("%d %f %c", &a, &b, &c);

    printf("Integer value=%d\n", a);
    printf("Float value=%f\n", b);
    printf("Character value=%c\n", c);

    return 0;
}

//