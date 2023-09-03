#include <stdio.h>
int main(){
    int sum = 0;
    /*for(int i = 1; i <= 100; i++)
        sum += i;*/
    int i = 1;
    sum = 0;
    while(i <= 100){
        sum += i;
        i++;
    }
    printf("The summation is %d\n", sum);
    return 0;
}
