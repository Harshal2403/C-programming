/* There is a JAR full of candies for sale at a mall counter. JAR has the capacity N, that is JAR can contain maximum N candies when JAR is full. At any point of time. JAR can have M number of Candies where M<=N. Candies are served to the customers. JAR is never remain empty as when last k candies are left. JAR if refilled with new candies in such a way that JAR get full.
Write a code to implement above scenario. Display JAR at counter with available number of candies. Input should be the number of candies one customer can order at point of time. Update the JAR after each purchase and display JAR at Counter.
Output should give number of Candies sold and updated number of Candies in JAR.
If Input is more than candies in JAR, return: “INVALID INPUT”
Given,
N=10, where N is NUMBER OF CANDIES AVAILABLE
K =< 5, where k is number of minimum candies that must be inside JAR ever.*/

#include<stdio.h>

int soldCandy(int N, int sold) 
{
  int k;
  if (sold>N)
  {
    printf("INVALID INPUT");
    return 0;
  }
  else
  {
    k=N-sold;
    N=N-sold;    
    if (k<=5)
    {
      N=10;
      printf("Candies in the Jar(refilled): %d\n",N);
    }
    else
    {    
      printf("Candies in the Jar: %d\n",N);
    }
    return sold;
  }
}
int main()
{
  int N=10,sold;

  printf("Enter number of candies: ");
  scanf("%d",&sold);

  printf("Number of candies sold: %d",soldCandy(N,sold));
  
  return 0;
}