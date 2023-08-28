#include <stdio.h>
int main(){
    double x1, x2;
    scanf("%lf %lf", &x1, &x2);
    printf("The division is %lf\n", (x1 / x2));
    if(x2 == 0.0)
        printf("Can't divide by zero.\n");
    else if(x1 / x2 > 2.0) //floating point number with double precision
        printf("Greater than 2.\n");
    else if((x1 / x2) == 2.0)
        printf("Equals to 2.\n");
    else//if(x1 / x2 < 2.0)
        printf("Less than 2.\n");
    return 0;
}
/* asterisk
1. input
2. int
3. there is no else if
4. there is no else
*/
