#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {2,17,23,34,56,61,69,78,84,91};
    int i,low=0,high=9,mid,n,flag=0;

    mid = (low + high) / 2;

    printf("Enter number to be searched: ");
    scanf("%d",&n);

    while(low <= high) 
    {
        mid = (low + high) / 2;
        if(n == arr[mid])
        {
            printf("%d is found at index %d.",arr[i],i);
            flag=1;
            break;
        }
        else if(n > arr[mid])
        {
            low = mid + 1;
        }
        else if (n < arr[mid])
        {
            high = mid - 1;
        }
        
    }
    if (flag == 0)
    {
        printf("%d not found.",n);
    }
    
    return 0;
}
