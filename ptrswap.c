#include<stdio.h>

int swap(int *p, int *q)
{
  

  return 0;
}
int main()
{
  int a=10,b=20;
  int *temp,*p,*q;

  p=&a;
  q=&b;
  temp = p;
  p=q;
  q=temp;
  printf("a=%d, b=%d\n",a,b);
  printf("*p=%d, *q=%d\n",*p,*q);
  return 0;
}