#include<stdio.h>
int main()
{
    int n,i,s1=0,s2=0,res,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s1=s1+i;
        s2=s2+i*i;
        res=s1*s1;
        d=res-s2;
    }
    printf("%d",d);
}