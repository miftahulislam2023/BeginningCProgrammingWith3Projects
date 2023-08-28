#include <stdio.h>
int main(){
    double height, width;
    printf("Enter the height: ");
    scanf("%lf", &height);
    printf("Enter the width: ");
    scanf("%lf", &width);
    printf("The area of the rectangle is %lf\n", height * width);
    return 0;
}
