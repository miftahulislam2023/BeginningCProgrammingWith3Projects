#include <stdio.h>
int main(){
    int x1, x2;
    x1 = 12;
    x2 = 5;
    /*printf("Enter two numbers: ");
    scanf("%d %d", &x1, &x2);*/
    if((x1 * x2) < 25)
        printf("The product is less than 25.\n");
    else if((x1 * x2) == 25)
        printf("The product is 25.\n");
    else if((x1 * x2) > 25)
        printf("The product is greater than 25.\n");
    return 0;
}
