#include<stdio.h>
int main()
{
    int n,r1,rev1=0,sq,sqrev1,r2,rev2=0;
    scanf("%d",&n);
    sq=n*n;
    while(n>0)
    {
        r1=n%10;
        rev1=rev1*10+r1;
        n=n/10;
    }
    sqrev1=rev1*rev1;
    while(sqrev1>0)
    {
        r2=sqrev1%10;
        rev2=rev2*10+r2;
        sqrev1=sqrev1/10;
    }
    if(sq==rev2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}