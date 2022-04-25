#include <stdio.h>

void main()
{
    int a[100], n, i, j, temp;
    printf("Input size of the array\n");
    scanf("%d", &n);
    printf("\nInput integer values in the array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nThe input array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j > 0; j--)
        {
            if (a[j] < a[j - 1])
            {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
            else
            {
                break;
            }
        }
    }
    printf("\nThe sorted array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}