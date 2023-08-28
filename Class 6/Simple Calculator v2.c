#include <stdio.h>
int main(){
    double x1, x2, choice;//indentation
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%lf", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &x1, &x2);

    if(choice == 1)
    printf("The addition is: %lf\n", x1 + x2); //backslash

    else if(choice == 2)
    printf("The subtraction is: %lf\n", x1 - x2);

    else if(choice == 3)
    printf("The multiplication is: %lf\n", x1 * x2);

    else
    printf("The division is: %lf\n", x1 / x2);//forward slash
    return 0;
}
