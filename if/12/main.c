#include <stdio.h>
#include <stdlib.h>

int main()
{
int m;

printf("Enter month number (1-12): ");
scanf("%d", &m);

if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 12 || m == 10)
    {
        printf("31 days");
    }
else if(m == 2)
    {
        printf("28 or 29 days");
    }
else if(m == 4 || m == 6 || m == 9 || m == 11)
    {
        printf("30 days");
    }
else
    {
        printf("Invalid input,Please enter month number between (1-12).");
    }
    return 0;
}
