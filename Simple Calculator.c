/*
Simple Console Based Basic Calculator demonstrating the use of
switch.
Coded by Miftahul Islam
*/
#include <stdio.h>

int main()
{
    int choice;
    double num1, num2, result;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    do {
        printf("Enter your choice (1-4):\n");
        scanf("%d", &choice);
    } while(choice > 4 || choice < 1 );
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    switch(choice) {
    case 1:
        result = num1 + num2;
        break;
    case 2:
        result = num1 - num2;
        break;
    case 3:
        result = num1 * num2;
        break;
    case 4:
        result = num1 / num2;
        break;
    }
    printf("The result is %.2lf\n", result);
    return 0;
}
