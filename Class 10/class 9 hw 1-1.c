#include <stdio.h>
int main(){
    int i, sum;
    sum = 0;
    i = 1;
    do{
        sum += i;
        i++;
    } while(i < 101);
    //infinite loop
    printf("The summation is: %d\n", sum);
    return 0;
}
