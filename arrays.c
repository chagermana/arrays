#include <stdio.h>//necessary for scanf print f
//reads in 5 scores and shows how much each score differes from the highest score
int main() {//main fucntion declaration:starting point for program
    int i, score[5], max;//variable declaration i-loop encounter, score[5]-array that will hold 5 scores,max-stores the max amongst the 5 scores entered
    
    printf("Enter the 5 scores: \n");//prompt user for input
    
    // Read the first score and initialize max with it
    scanf("%i", &score[0]);//scan f readds the first score from the user and stores it in score[0]
    max = score[0]; // max is initialized to the first score, assuming it is the highest until proven otherwise by subsequent scores
    
    // Read the remaining scores
    for (i = 1; i < 5; i++) { // for loop iterates from 1 to 4 to read the remaining 4 scores
        scanf("%i", &score[i]); // scanf- reads each score into the array score[i]
        if (score[i] > max) { // if statement checks if the current score is greater than the current max.if it is max is updated to this new score
            max = score[i];
        }
    }
    
    printf("The highest score is %i\n", max);
    printf("Difference from the highest:\n");
    
    // Print the differences from the highest score
    for (i = 0; i < 5; i++) { //iterates over all the scores
        printf("%i is off the maximum score by %i\n", score[i], max - score[i]);
    }
    
    return 0;
}
