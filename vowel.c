#include<stdio.h>

int main()
{
  char name[] = "elephant";
  int i=0,count=0;

  while (name[i] != '\0') /*(i < 9)*/
  {
    if (name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
    {
      count++;
    }
    i++;
  }
  printf("\nNumber of vowel: %d\n",count);

  return 0;
}