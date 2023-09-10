#include <stdio.h>
#include <stdlib.h>

/* Function declaration */
double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);


int main()
{
    float radius, dia, circ, area;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    dia  = getDiameter(radius);       // Call getDiameter function
    circ = getCircumference(radius);  // Call getCircumference function
    area = getArea(radius);           // Call getArea function

    printf("Diameter of the circle = %.2f units\n", dia);
    printf("Circumference of the circle = %.2f units\n", circ);
    printf("Area of the circle = %.2f sq. units", area);

    return 0;
}
/**
 * Calculate diameter of circle
 */
double getDiameter(double radius)
{
    return (2 * radius);
}


/**
 * Calculate circumference of circle
 */
double getCircumference(double radius)
{
    return (2 * 3.14 * radius);
}


/**
 * Find area of circle
 */
double getArea(double radius)
{
    return (3.14 * radius * radius);
}
