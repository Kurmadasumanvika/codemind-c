#include<stdio.h>
int main()
{
    int n,i,sum=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    int ave=sum/n;
    for(i=0;i<n;i++)
    {
     if(a[i]<=ave)
     {
         c=c+1;
     }
    }
    printf("%d",c);
}