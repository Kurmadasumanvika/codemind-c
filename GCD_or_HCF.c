#include<stdio.h>
int main()
{
    int i,n,m,lcm,hcf;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        lcm=n*i;
        if(lcm%m==0)
        break;
    }
        hcf=(n*m)/lcm;
        {
            printf("%d",hcf);
        }
}