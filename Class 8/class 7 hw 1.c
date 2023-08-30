#include <stdio.h>
int main(){
    int x; //initialization, here x is a loop-control variable
    x = 1;
    while(x < 101)//condition
    {
        printf("%d\n", x);
        x = x + 1;
    }
    return 0;
}
