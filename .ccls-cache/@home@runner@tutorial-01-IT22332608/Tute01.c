/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {
  float marks1,marks2;
  
  printf("Enter marks of subject 1 : ");
  scanf("%f",&marks1);

  printf("Enter marks of subject 2 : ");
  scanf("%f",&marks2);

  printf("Average of marks is: %.2f",(marks1+marks2)/2.0);
  return 0;
}

