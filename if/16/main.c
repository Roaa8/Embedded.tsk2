#include <stdio.h>
#include <stdlib.h>

int main()
{
     int s1, s2, s3;

    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &s1, &s2, &s3);

    if(s1==s2 && s2==s3)
    {
        printf("Equilateral triangle.");
    }
    else if(s1==s2 || s1==s3 || s2==s3)
    {
        printf("Isosceles triangle.");
    }
    else
    {
        printf("Scalene triangle.");
    }

    return 0;
}
