#include<stdio.h>
int main()
{
    int n,r,evencount=0,oddcount=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r%2==0)
        {
            evencount=evencount+1;
        }
        else
        {
            oddcount=oddcount+1;
        }
        n=n/10;
    }
    if(oddcount==0)
    {
        printf("Even");
    }
    else if(evencount==0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}