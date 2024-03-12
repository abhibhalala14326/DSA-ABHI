#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d ",&n);
    int arr[n];

    
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int t=arr[0];
    arr[0]=arr[n-1];
    arr[n-1]=t;
     
    for (int i=1;i<n;i++)
    {
        
        printf("%d \t",arr[i]);
    }
    
}
