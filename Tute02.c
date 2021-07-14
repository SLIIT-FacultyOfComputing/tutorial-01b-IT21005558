/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main()
{
  int dist, amount, tot; //variable declaration

  printf("Enter the Distance : "); // get input from user
  scanf("%d", &dist);

  if( dist <30 ) //distance less than 30 
  {
    printf( "Amount = %d",dist * 50 ); // Calculation and display amount
  }
  else if( dist >30 ) //distance grater than 30 
  {
    amount = 30 * dist + (dist - 30) * 40; // Calculation and display amount
    printf( "Amount = %d", amount ); 
  }
  return 0;
}
