#include <stdio.h>
int main(){
    int n;
    printf("Enter a number (1-100): ");
    scanf("%d", &n);
    if(n > 1 && n <= 100){
        int i, sum; //loop control variable
        i = 1;
        sum = 0;
        while(i <= n) //condition
        {
            sum += i; //sum = sum + i;
            i++; //i = i + 1;
        }
        printf("The summation is: %d\n", sum);
    }
    else
        printf("Invalid input.\n");
    return 0;
}
