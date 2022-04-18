#include <stdio.h>

void main()
{
    int a[5];
    printf("Input 5 integer values\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nThe Entered values are\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
}