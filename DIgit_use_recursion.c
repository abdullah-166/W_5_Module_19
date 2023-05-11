#include<stdio.h>
void recursion(int n)
{
    if(n==0)
    {
        return;
    }
    int p = n%10;
    recursion(n/10);
    printf("%d ",p);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int value;
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        recursion(value);
        printf("\n");
    }
    return 0;
}