#include<stdio.h>
int main()
{
    int X1,Y1,X2,Y2,t1,t2;
    scanf("%d %d %d %d",&X1,&Y1,&X2,&Y2);
    t1=X1+Y1;
    t2=X2+Y2;
    if(t1<t2)
    {
        printf("%d",t1);
    }
    else
    {
        printf("%d",t2);
    }
}