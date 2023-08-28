#include <stdio.h>
int main(){
    int i = 10;//part 1: initialization
    while(i > 0)//part 2: condition check
    {
        printf("%d\n", i);
        i = i - 1; //part 3: decrement
    }
    return 0;
}
