#include <stdio.h>

void main()
{
    int a[100], n, i, j, max, maxIndex;
    printf("Input size of the array: ");
    scanf("%d", &n);
    printf("Input integer values in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The input array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        max = a[0], maxIndex = 0;
        for (j = 1; j < n - i; j++)
        {
            if (a[maxIndex] < a[j])
            {
                max = a[j];
                maxIndex = j;
            }
        }
        a[maxIndex] = a[n - i - 1];
        a[n - i - 1] = max;
    }
    printf("\nThe sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}