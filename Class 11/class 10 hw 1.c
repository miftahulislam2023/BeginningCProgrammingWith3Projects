#include <stdio.h>
int main(){
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    switch(x){
    case 4:
        printf("You entered 4.\n");
        break;
    case 5:
        printf("You entered 5.\n");
        break;
    case 10:
        printf("You entered 10.\n");
        break;
    default:
        printf("You didn't enter 4 or 5 or 10.\n");
        break;
    }
    return 0;
}
