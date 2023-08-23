#include <stdio.h>
int main(){
    int number;

    printf("Enter a number: ");//prompt
    scanf("%d", &number);

    if(number == 100)
        printf("The number is 100!");

    return 0;
}
