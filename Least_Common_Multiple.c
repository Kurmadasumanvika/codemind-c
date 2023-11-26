#include<stdio.h>
int main()
{
    int a,b,i,lcm;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        lcm=a*i;
        if(lcm%b==0)
        {
           printf("%d",lcm);
           break;
        }
    }
}