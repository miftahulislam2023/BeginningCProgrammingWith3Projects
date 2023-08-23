#include <stdio.h>
int main(){
    double x1, x2, x3;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &x1, &x2, &x3);

    printf("The summation is %lf\n", x1 + x2 + x3);
    printf("The multiplication is %lf", x1 * x2 * x3);

    return 0;
}
