#include<stdio.h>

int main()
{
  int num = 10;
  int *ptr;
  ptr = &num;

  printf("sizeof(ptr) = %d\n",sizeof(ptr));
  printf("ptr         = %d\n",ptr);
  printf("*ptr        = %d\n",*ptr);
  printf("&ptr        = %d\n",&ptr);
  return 0;
}