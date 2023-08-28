#include <stdio.h>
int main(){
    double height, base;
    printf("Enter the height: ");
    scanf("%lf", &height);
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("The area of the triangle is %lf\n", .5 * height * base);
    return 0;
}
