#include<stdio.h>
int main()
{
	char str[20];
	scanf("%[^
]s",&str);
	int i,len=0,t;
	for(i=0;str[i]!=NULL;i++)
	{
		len=len+1;
	}
	i=0;
	int j=len-1;
	while(i<=j)
	{
		t=str[i];
		str[i]=str[j];
		str[j]=t;
		i++;
		j--;
	}
	printf("%s",str);
}