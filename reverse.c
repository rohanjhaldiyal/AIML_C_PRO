#include <stdio.h>
void main()
{
    int n, r = 0, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (; n > 0;)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    printf("\nThe reversed number is %d", rev);
}