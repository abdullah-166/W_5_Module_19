#include<stdio.h>
#include<string.h>
int main()
{
    char n[1001],m[1001],temp;
    scanf("%s",n);
    printf("Before Palindrome: %s",n);
    strcpy(m,n);
    int i=0,j=strlen(m)-1;
   while(i<j)
   {
    temp = m[i];
    m[i]=m[j];
    m[j]=temp;
    i++;
    j--;
   }
   if(strcmp(n,m)==0)
   {
    printf("\nYes\n");
   }
   else
   {
    printf("\nNo\n");
   }
    return 0;
}