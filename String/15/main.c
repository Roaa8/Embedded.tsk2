#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100 // Maximum string size

/*  Function declaration */
int lastIndexOf(const char * str, const char toFind);


int main()
{
    char str[MAX_SIZE];
    char toFind;
    int index;

    printf("Enter any string: ");
    gets(str);

    printf("Enter any character to find: ");
    toFind = getchar();

    index = lastIndexOf(str, toFind);

    printf("\nLast index of '%c' is %d", toFind, index);

    return 0;
}


/**
 * Function to find last index of any character in the given string
 */
int lastIndexOf(const char * str, const char toFind)
{
    int index = -1;
    int i = 0;

    while(str[i] != '\0')
    {
        // Update index if match is found
        if(str[i] == toFind)
        {
            index = i;
        }
        i++;
    }

    return index;
}
