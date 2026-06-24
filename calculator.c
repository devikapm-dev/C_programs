#include<stdio.h>

int main()
{
    int op, n1, n2;
    float res;

    printf("--------------------------\n");
    printf("      CALCULATOR          \n");
    printf("--------------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("--------------------------\n");
    printf("Select the operation: ");
    scanf("%d", &op);

    while(1)
    {
        switch(op)
        {
            case 1:
                printf("Enter first number: ");
                scanf("%d", &n1);
                printf("Enter second number: ");
                scanf("%d", &n2);
                res = n1 + n2;
                printf("Sum = %.2f\n", res);
                break;

            case 2:
                printf("Enter first number: ");
                scanf("%d", &n1);
                printf("Enter second number: ");
                scanf("%d", &n2);
                res = n1 - n2;
                printf("Difference = %.2f\n", res);
                break;

            case 3:
                printf("Enter first number: ");
                scanf("%d", &n1);
                printf("Enter second number: ");
                scanf("%d", &n2);
                res = n1 * n2;
                printf("Product = %.2f\n", res);
                break;

            case 4:
                printf("Enter first number: ");
                scanf("%d", &n1);
                printf("Enter second number: ");
                scanf("%d", &n2);
                if(n2 == 0)
                {
                    printf("Error! Division by zero!\n");
                }
                else
                {
                    res = (float)n1 / n2;
                    printf("Quotient = %.2f\n", res);
                }
                break;

            case 5:
                printf("Exiting calculator. Goodbye!\n");
                return 0;

            default:
                printf("Invalid entry! Try again.\n");
        }

        printf("\nSelect the next operation: ");
        scanf("%d", &op);
    }

    return 0;
}