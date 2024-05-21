#include<stdio.h>

int main(){

char name[40];
printf(" enter your name\n");// variable declaration-name with a capacity to hold 39 characters plus the null terminator
gets( name);
printf("my name is %s \n", name); 

float yob;

printf("Enter your year of birth:");
scanf("%f",&yob);
float age=2024-yob;
printf("I am %.0f years old",age);




return 0;

}

