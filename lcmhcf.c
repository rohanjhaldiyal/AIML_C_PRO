#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, lcm, hcf, min, max;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    max = a > b ? a : b;
    min = a < b ? a : b;
    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }
    printf("HCF = %d\n", hcf);
    lcm = max;
    while (1 > 0)
    {
        if (max % a == 0 && max % b == 0)
        {
            lcm = max;
            break;
        }
        else
            max++;
    }
    printf("LCM = %d\n", lcm);
}
