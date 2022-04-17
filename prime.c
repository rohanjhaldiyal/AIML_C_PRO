#include <stdio.h>

void main()
{
    int a;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    int c = 0;
    for (int i = 2; i < a; i++)
    {
        if(a % i == 0) 
            c++;
    }
    if(c != 0)
        printf("a = %d is not a prime number", a);
    else
        printf("a = %d is a prime number", a);
}