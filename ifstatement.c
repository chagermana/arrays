#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);  // Read user input

    int fact = factorial(number);  // Call the factorial function
    printf("The factorial of %d is %d\n", number, fact);  // Output the result

    return 0;
}