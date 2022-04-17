#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);
    printf("a&b %d\n", a & b);
    printf("a|b %d\n", a | b);
    printf("a^b %d\n", a ^ b);
    printf("~a %d\n", ~a);
    printf("a>>2 %d\n", a >> 2);
    printf("a<<2 %d\n", a << 2);
}