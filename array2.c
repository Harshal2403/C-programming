#include<stdio.h>
#define MAX_SIZE 10

int main()
{
  int arr[MAX_SIZE]={10, 9, 7, 101, 23, 44, 12, 78, 34, 23};
  int i,j,largest,sec_largest;

  largest=arr[0];
  sec_largest=arr[1];

  for (i = 0; i < MAX_SIZE; i++)
  {
    if (arr[i] > largest)
    {
      sec_largest = largest;
      largest = arr[i];
    }
    else if (arr[i] > sec_largest && arr[i] != largest)
    {
      sec_largest = arr[i];
    }
    
  }

  printf("largest = %d\nsecond largest = %d",largest,sec_largest); 

  return 0;
}