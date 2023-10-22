#include<stdio.h>
int main()
{
    int a,b,c,t1,t2,t3;
    scanf("%d %d %d",&a,&b,&c);
    t1=a+b;
    t2=a+c;
    t3=b+c;
    if(t1>t2 && t1>t3)
    {
        printf("%d",t1);
    }
    else if(t2>t1 && t2>t3)
    {
        printf("%d",t2);
    }
    else
    {
        printf("%d",t3);
    }
}