#include<stdio.h>
int main()
{
    int N,K,M,res;
    scanf("%d %d %d",&N,&K,&M);
    if(res=(N+(K*M)-1)/(K*M))
    {
        printf("%d",res);
    }
}