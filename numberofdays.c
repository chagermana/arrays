#include <stdio.h>//calculates the total number of days from the start of the year up to a given date provided by the user as the month and the day

int main() {
    double total_days;// used to accumulate the total number of days from the start of the year
    int j, month, day;// j - loop encounter,month and day store the users input for month and day,
    int days_per_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//an array that stores the number of days in each month of a non leap year
    
    // Input month and day
    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    printf("Enter the day (1-31): ");
    scanf("%d", &day);
    
    // Validate the month and day
    if (month < 1 || month > 12 || day < 1 || day > days_per_month[month - 1]) {
        printf("Invalid date.\n");
        return 1; // Exit the program with an error code
    }
    
    // Calculate total days from the start of the year
    total_days = day;// total days is initialized by the day value
    for (j = 0; j < month - 1; j++) {//for looop iterates through the months preceding the given months,summing up the days in each of these months to total days
        total_days += days_per_month[j];
    }
    
    // Print the total number of days
    printf("The total days from the start of the year is %.0f\n", total_days);
    
    return 0;
}
