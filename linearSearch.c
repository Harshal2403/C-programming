#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[]={15,20,6,99,11,23,12,32,15,8};
    int i,n,flag=0;

    printf("Enter number to search: ");
    scanf("%d",&n);

    for (i = 0; i < 10; i++)
    {
        if (arr[i] == n)
        {
            printf("Number %d is present at index %d\n",arr[i],i);
            flag=1;

        }
    }
    if (flag == 0)
    {
        printf("Number %d is not present in array!",n);
    }
    
    
    return 0;
}
