//Q67 (Arrays (1D))
//Insert an element in an array at a given position.
#include<stdio.h>

int main() 
{
    int n,index;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array :",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the index of element you want to delete:");
    scanf("%d",&index);
    
    for(int i=index;i<n-1;i++)
    {
        a[i]=a[i+1];
    }A
    n=n-1;
    
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
    return 0;
}
