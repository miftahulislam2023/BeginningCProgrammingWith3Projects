#include <stdio.h>
int main(){
    int sum;
    sum = 0;
    for(int i = 1; i < 101; i++)
        sum += i; //sum = sum + i;
    printf("The summation is: %d\n", sum);
    return 0;
}
