#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    while(n>=1)
    {
        printf("%d\n", n);
        n--;
    }
    return 0;
}
