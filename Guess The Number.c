/*
Guess the Number Game Using if-else statements and loops
with an additional library functions abs() and rand().
Coded By Miftahul Islam.
*/
/*
rand():
Description
The C library function int rand(void) returns a
pseudo-random number in the range of 0 to RAND_MAX.

RAND_MAX is a constant whose default value may vary
between implementations but it is granted to be at least 32767.

Declaration
Following is the declaration for rand() function.
int rand(void)

Parameters
NA

Return Value
This function returns an integer value between 0 and RAND_MAX.
*/
/*
abs():
Description
The C library function int abs(int x) returns
the absolute value of int x.

Declaration
Following is the declaration for abs() function.

int abs(int x)
Parameters
x − This is the integral value.

Return Value
This function returns the absolute value of x.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int random, upper, i, num, win;
    win = 0;
    do {
        printf("Enter the upper range (10 or above): ");
        scanf("%d", &upper);
    } while(upper < 10);
        random = rand() % upper + 1;
    for(i = 0; i < 3; i++) {
        printf("Guess the number: ");
        scanf("%d", &num);
        if(num == random) {
            win = 1;
            break;
        }
        else if(abs(num - random) <= 5)
        	printf("You're close!\n");
        else if(num > random)
            printf("Too high!\n");
        else
            printf("Too low!\n");
    }
    if(win == 1)
        printf("Congratulations! You found it!\nThe number was %d\n", random);
    else
        printf("You lost!\nThe Number was %d\n", random);
}