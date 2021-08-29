#include<stdio.h>

int *getarray(int arr[5])
{
  int arr[5] = {1,2,3,4,5};
  return arr;
}
int main()
{
  int *n,i,a[5];
  n = getarray(a);
  printf("\nElements of array are: ");
  for (i = 0; i < 5; i++)
  {
    printf("%d",n[i]);
  }
   

  return 0;
}