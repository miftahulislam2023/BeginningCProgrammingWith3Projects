#include <stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x % 2 == 0)//modulus operator
        printf("The number is even.");
    return 0;
}
/*
if(condition){
    statements
}
*/

