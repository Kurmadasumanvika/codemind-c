#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d %d",&a,&b);
    n=n>a;
    while(n<b)
    {
       if(n>a && n<b)
       {
           printf("%d %d %d
",n,n*n,n*n*n);
       }
       n++;
    }
}