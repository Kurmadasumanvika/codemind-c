#include<stdio.h>
int main()
{
    int n,s,t,c=1;
    scanf("%d",&n);
    s=n*n;
    t=n;
    while(n!=0)
    {
        c=c*10;
        n=n/10;
    }
    if(s%c==t)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
    
    
}