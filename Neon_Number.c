#include<stdio.h>
int main()
{
	int n,r,sum=0,t;
	scanf("%d",&n);
	t=n*n;
	while(t!=0)
	{
		r=t%10;
		sum=sum+r;
		t=t/10;
	}
	if(n==sum)
	{
		printf("Neon Number");
	}
	else
	{
		printf("Not Neon Number");
	}
	
}