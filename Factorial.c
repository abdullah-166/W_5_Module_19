#include<stdio.h>
long long int factorial(int m)
{
    if(m==0)
    {
        return 1;
    }
    long long int f=factorial(m-1);
   return f*m;
}
int main()
{
   long long int n;
    long long int i,f=1;
    scanf("%d",&n);
    long long int result = factorial(n);
    printf("%d",result);
    return 0;
}