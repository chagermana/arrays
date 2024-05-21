#include <stdio.h>

int main() {
    // Write C code here
    int age;
    
    printf("Enter age to determine the terminology to be used:\n");
    scanf("%i",&age);
    if(age>0&&age<=5)
      printf("Infant");
    else if(age>5&&age<=12)
      printf("Child");
    else if(age>12&&age<=19)
      printf("Teen");
     else if(age>19&&age<=35) 
      printf("Youth");
      else if(age>35&&age<=50)
      printf("Adult");
      else if(age>50&&age<=65)
       printf("Middle age");
       else if(age>65&&age<=100)
       printf("Senior citizen");
       else
       printf("Invalid age bracket");

     

    return 0;
}