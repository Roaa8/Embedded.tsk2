#include <stdio.h>
#include <stdlib.h>

int main()
{
     char op;
    float num1, num2, result=0.0f;

    printf("WELCOME TO THE CALCULATOR\n");
    printf("----------------------------\n");
    printf("Enter [number 1] [+ - * /] [number 2]\n");

    scanf("%f %c %f", &num1, &op, &num2);

    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        default:
            printf("Invalid operator");
    }

    printf("%f %c %f = %f", num1, op, num2, result);

    return 0;
}
