#include<stdio.h>
#include<string.h>

struct employee
{
  int id;
  char name[20];
  float salary;
}e1,e2;

int main()
{
  e1.id = 650;
  strcpy(e1.name,"aabhash malviya");
  e1.salary = 30000;

  e2.id = 712;
  strcpy(e2.name,"prakhar saikhedkar");
  e2.salary = 35000;

  printf("Id    : %d\n",e1.id);
  printf("Name  : %s\n",e1.name);
  printf("salary: %.2f\n",e1.salary);

  printf("Id    : %d\n",e2.id);
  printf("Name  : %s\n",e2.name);
  printf("salary: %.2f\n",e2.salary);
  return 0;
}