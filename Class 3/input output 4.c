#include <stdio.h>
/*int main()
{
    int x1, x2;//indentation
    printf("Enter two numbers: ");
}*/
int main(){
    int x1, x2;//indentation
    printf("Enter two numbers: ");
    scanf("%d %d", &x1, &x2);
    printf("The subtraction of %d and %d is: %d", x1, x2, x1 - x2);
}

