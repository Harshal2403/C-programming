//Program to check whether alphabet is vowel or consonent
#include<stdio.h>
 void main()
 {
     char ch;

     printf("Enter a alphabetic character: ");
     scanf("%c",&ch);

     if (ch=='a'|| ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
     {
         printf("%c is Vowel.",ch);
     }
     else
     {
         printf("%c is Consonent.",ch);
     }
     
 }