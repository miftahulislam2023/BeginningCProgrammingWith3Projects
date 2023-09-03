#include <stdio.h>
int main(){
    int i = 1;
    while(i <= 100){
        printf("%d\n", i);
        i++;
    }

    i = 1;
    do{
        printf("%d\n", i);
        i++;
    } while(i <= 100);
    return 0;
}
