#include<stdio.h>

struct student{
  int id;
  char name[20];
}st[3];

int main()
{
  // struct student st[3];
  int i=0;

  printf("Enter records: \n");

  for (i = 0; i < 3; i++)
  {
    printf("Enter student id  : ");
    scanf("%d",&st[i].id);
    printf("Enter student name: ");
    scanf("%s",&st[i].name);
  }
  
  printf("Student applications: \n");
  for (i = 0; i < 3; i++)
  {
    printf("student id  : %d\n",st[i].id);   
    printf("student name: %s\n",st[i].name);
  }
  
  return 0;
}