#include <stdio.h>

void main()
{
    int a = 10, b = 20;
    printf("The value of a before swapping is %d\n", a);
    printf("The value of b before swapping is %d\n", b);
    int temp = a;
    a = b;
    b = temp;
    printf("The value of a after swapping is %d\n", a);
    printf("The value of b after swapping is %d\n", b);
}