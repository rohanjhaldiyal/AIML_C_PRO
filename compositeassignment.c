#include <stdio.h>

void main()
{
    int a = 10, b = 20, c = 30;
    a = ++a + --b - c++;
    printf("a = %d, b = %d, c = %d", a, b, c);
    c = c++ - a++ + b--;
    printf("a = %d, b = %d, c = %d", a, b, c);
}