#include <stdio.h>
#include <stdlib.h>

int main()
{
   int base, expo;
    long long power = 1;
    int i;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &expo);

    for(i=1; i<=expo; i++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %d", base, expo, power);
    return 0;
}
