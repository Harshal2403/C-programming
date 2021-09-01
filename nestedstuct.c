#include<stdio.h>

struct address{
  char city[10];
  int pin;
};
struct employee{
  char name[20];
  struct address add;
};

int main()
{
  struct employee e1;
  printf("Enter name, city, pin-code: ");
  scanf("%s \n%s \n%d",&e1.name,&e1.add.city,&e1.add.pin);

  printf("Name: %s\nCity: %s\nPin: %d",e1.name,e1.add.pin,e1.add.city);
  
  return 0;
}