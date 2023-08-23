#include <stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x % 5 == 0)//modulus operator
        printf("The number can be divided by 5 with 0 left.");
    return 0;
}
/*
if(condition){
    statements
}
*/

