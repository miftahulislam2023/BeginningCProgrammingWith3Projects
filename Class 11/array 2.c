#include <stdio.h>
int main(){
    double x[10], sum;
    int i;
    for(i = 0, sum = 0; i < 10; i++)
    {
        scanf("%lf", &x[i]);
        sum += x[i];
    }
    printf("The summation is %lf\n", sum);
    return 0;
}
