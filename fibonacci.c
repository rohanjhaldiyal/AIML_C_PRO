#include <stdio.h>
int fibo(int n)
{
    if (n < 2)
    {
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}
int printfibo(int n) 
{
    int i = 0;
    while (i <= n)
    {
        printf("%d ", fibo(i));
        i++;
    }
}
void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printfibo(n);
}