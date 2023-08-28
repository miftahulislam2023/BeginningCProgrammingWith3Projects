#include <stdio.h>
int main(){
    int x, y;
    x = 12;
    y = 65;
    printf("%d\n", x > 3);
    printf("%d\n", x < 5);
    printf("%d\n", 5 > 6);
    printf("%d\n", 7 == 7);
    printf("%d\n", y * 15);
    printf("%d\n", y - 65);
    if(y * 65)
        printf("True!\n");
    if(y - 65)
        printf("False!\n"); //this statement will never print
    if(0)
        printf("False!\n"); //this statement will never print
    return 0;
}
