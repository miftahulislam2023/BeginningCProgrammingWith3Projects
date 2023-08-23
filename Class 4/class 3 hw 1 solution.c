#include <stdio.h>
int main(){
    // to store the user-choice
    int choice;
    // to perform operation (+-*/) according to the user choice
    double num1, num2;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    if(choice == 1)
        printf("The addition is: %lf", num1 + num2);
    if(choice == 2)
        printf("The subtraction is: %lf", num1 - num2);
    if(choice == 3)
        printf("The multiplication is: %lf", num1 * num2);
    if(choice == 4)
        printf("The division is: %lf", num1 / num2);

    return 0;
}
