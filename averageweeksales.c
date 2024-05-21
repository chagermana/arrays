#include <stdio.h>
#define SIZE 6

int main() {
    double sales[SIZE], sum = 0, average;
    int i;

    printf("Enter the sales for %i days:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Day %d: ", i + 1);
        scanf("%lf", &sales[i]);
        sum += sales[i];
    }

    average = sum / SIZE;
    printf("The average is %f\n", average);

    return 0;
}

