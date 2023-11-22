#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    i=n*2;
    while(i>=1)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
        i--;
    }
}