#include<stdio.h>

int linearsearch(int a[],int num)
{
  int i;
  for (i = 0; i < 10; i++)
  {
    if (num == a[i])
    {
      return num;
    }
    else
    {
      return 0;
    }
  }

}
int main()
{
  int arr[10] = {10, 9, 7, 101, 23, 44, 12, 78, 34, 23};
  int num,i,res;

  printf("Enter the number to find: ");
  scanf("%d",&num);

  res = linearsearch(arr,num);

  if (res == 0)
  {
    printf("Number not found!!");
  }
  else
  {
    printf("%d is present",res);
  }
  
  return 0;
}