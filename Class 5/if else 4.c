#include <stdio.h>
int main(){
    int x1, x2;
    printf("Enter two numbers: ");
    scanf("%d %d", &x1, &x2);
    if((x1 + x2) % 7 == 0)
        printf("The sum can be divided by 5.");
    return 0;
}
