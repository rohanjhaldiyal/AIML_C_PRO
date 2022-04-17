#include <stdio.h>

void main()
{
    int a;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("\n ++a = %d ", ++a);
    printf("\n --a = %d ", --a);
    printf("\n a++ = %d ", a++);
    printf("\n a-- = %d ", a--);
}