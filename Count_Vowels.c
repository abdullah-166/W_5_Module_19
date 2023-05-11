#include<stdio.h>
#include<string.h>
int vowel(char name[], int i)
{
    if(name[i] == '\0')
    {
        return 0;
    }
    int res = vowel(name,i+1);
    if(name[i] >= 'A' && name[i] <= 'Z')
    {
        name[i]+=32;
    }
    if(name[i]=='a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
    {
       return res++;
    }
    else
    {
        return res;
    }
}
int main()
{
    char name[201];
    fgets(name,201,stdin);
    int ans = vowel(name,0);
    printf("%d\n",ans);
}
