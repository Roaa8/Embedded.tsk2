#include <stdio.h>
#include <stdlib.h>

double cube(double num);

int main()
{
    int num;
    double c;

    printf("Enter a number: ");
    scanf("%d", &num);

    c = cube(num);

    printf("Cube of %d is %.2f", num, c);

    return 0;
}

/**
 * Function to find cube of any number
 */
double cube(double num)
{
    return (num * num * num);
}
