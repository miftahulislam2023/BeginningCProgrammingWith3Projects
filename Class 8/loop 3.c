#include <stdio.h>
int main(){
    int number, x;
    printf("Enter a number (1-100): ");
    scanf("%d", &number);
    int max;
    max  = number * 10;
    x = number;
    if(number <= 100 && number > 0){
        while(number <= max){
            printf("%d\n", number);
            number += x;
        }
    }
    else
        printf("Invalid input.\n");
    return 0;
}
