#include <stdio.h>
int main (){
    int odd_numbers[100], sum = 0;
    for(int i = 1, j = 0; j < 100; i += 2, j++){
        odd_numbers[j] = i;
        sum += odd_numbers[j];
    }
    printf("The summation is %d.\n", sum);
    /*odd_numbers[0] = 1;
    odd_numbers[1] = 3;
    odd_numbers[2] = 5;
    odd_numbers[3] = 7;*/
    return 0;
}
