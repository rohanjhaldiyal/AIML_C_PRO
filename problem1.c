#include <stdio.h>

void main()
{
    int a = 100, b = 150, c = 200;
    printf("a = %d, b = %d, c = %d", ++a, b--, c++);
    printf("a = %d, b = %d, c = %d", a, b, c);
    printf("a = ", a++ - --a + ++a - a--);
    printf("a = %d", a);
}