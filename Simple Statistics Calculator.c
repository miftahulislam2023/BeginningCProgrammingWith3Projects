#include <stdio.h>

void show_numbers(double *numbers, int total_number){
    int i;
    printf("The numbers are: \n");
    for(i = 0; i < total_number; i++){
       printf("%.2lf ", numbers[i]);
    }
    printf("\n");
}

void sort(double *numbers, int total_number){
    double temp = numbers[0];
    for (int step = 0; step < total_number - 1; ++step) {
        for (int i = 0; i < total_number - step - 1; ++i) {
            if (numbers[i] > numbers[i + 1]) {
                temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;
            }
        }
    }
    show_numbers(numbers, total_number);
}

void show_sum(double *numbers, int total_number){
    double sum = 0.0;
    int i;
    for(i = 0; i < total_number; i++){
        sum += numbers[i];
    }
    printf("The sum is: %.2lf\n", sum);
}

double show_mean(double sum, int total_number){
    printf("The mean is: %.2lf\n", sum / total_number);
}

int main(){
    int total_number, i, choice;

    printf("Enter the number of entries: ");
    scanf("%d", &total_number);

    double numbers[total_number], sum, temp;

    for(i = 0; i < total_number; i++){
        scanf("%lf", &numbers[i]);
        sum += numbers[i];
    }

    printf("1. Show the numbers\n2. Sort the numbers\n3. Show the sum\n4. Show the mean\n");
    do{
        printf("Enter your choice: ");
        scanf("%d", &choice);
    } while(choice != 1 && choice != 2 && choice != 3 && choice != 4);

    switch(choice){
        case 1:
            show_numbers(numbers, total_number);
            break;
        case 2:
            sort(numbers, total_number);
            break;
        case 3:
            show_sum(numbers, total_number);
            break;
        case 4:
            show_mean(sum, total_number);
            break;
    }

    return 0;
}
