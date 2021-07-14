/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
 float mark1, mark2; //variable declaration
 float avg=0;

 printf("Enter Mark 1 : "); // get input from user
 scanf("%f", &mark1);

 printf("Enter Mark 2 : "); // get input from user
 scanf("%f", &mark2);

avg = (mark1 + mark2) /2; // Calculation

printf("Average is : %.2f\n",avg); //display the average

  return 0;
}

