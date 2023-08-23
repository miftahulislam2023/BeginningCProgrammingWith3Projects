#include <stdio.h>
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number % 7 == 0)
        printf("The number can be divided by 7.");
    return 0;
}
