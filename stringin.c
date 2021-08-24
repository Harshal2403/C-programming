#include<stdio.h>

int main()
{
  char str[20];

  printf("Enter string");
  scanf("%[^\n]s",&str);

  printf("You entered : %s",str);

  return 0;
}