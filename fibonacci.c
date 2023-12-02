#include<stdio.h>
int main()
{
    int a1=0,a2=1,a3,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a3=a1+a2;
        printf("%d ",a1);
        a1=a2;
        a2=a3;
    }
}