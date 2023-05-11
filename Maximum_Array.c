#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    int max=A[0];
    for(i=0;i<n;i++)
    {
        if(A[i]>max)
        max = A[i];
    }
    printf("\nMaximum Value is: %d",max);
    return 0;
}