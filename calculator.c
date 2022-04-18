#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);
    printf("Choose the operator\n1 - +\n2 - -\n3 - *\n4 - /\n5 - %%\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("The value of a+b is %d", a + b);
        break;

    case 2:
        printf("The value of a-b is %d", a - b);
        break;

    case 3:
        printf("The value of a*b is %d", a * b);
        break;

    case 4:
        printf("The value of a/b is %d", a / b);
        break;

    case 5:
        printf("The value of a%b is %d", a % b);
        break;

    default:
        printf("Invalid opertator");
        break;
    }
}