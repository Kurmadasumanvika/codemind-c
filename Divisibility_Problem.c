#include<stdio.h>
int main()
{
    int a,b,res=0;
    scanf("%d%d",&a,&b);
    if(a%b!=0)
    {
        res=b-(a%b);
    }
    printf("%d",res);
}