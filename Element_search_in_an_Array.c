#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int n1;
    scanf("%d",&n1);
    for(i=0;i<n;i++)
    {
        if(n1==a[i])
        {
            printf("True");
            break;
        }
    }
    if(n1!=a[i])
    {
        printf("False");
    }
}