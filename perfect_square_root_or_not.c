#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      i*i;
        if(n==i*i)
        {
            printf("True");
            break;
        }
    }
    if(n!=i*i)
        {
            printf("False");
        }
}