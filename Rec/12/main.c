#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>


void printEvenOdd(int start, int end) {
    if (start > end) {
        return;
    }

    if (start % 2 == 0) {
        printf("%d is even\n", start);
    } else {
        printf("%d is odd\n", start);
    }

    printEvenOdd(start + 1, end);
}

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Even and odd numbers between %d and %d are:\n", start, end);
    printEvenOdd(start, end);

    return 0;
}




