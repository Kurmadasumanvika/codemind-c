#include<stdio.h>
int main()
{
    int n,i,s1=0,s2=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s1=s1+a[i];
        }
        else 
        {
            s2=s2+a[i];
        }
    }
    int d;
    if(s2>s1)
    {
        d=s2-s1;
        printf("%d",d);
    }
    else
    {
        d=s1-s2;
        printf("%d",d);
    }
}