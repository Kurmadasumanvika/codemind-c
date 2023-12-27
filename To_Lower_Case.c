
#include<stdio.h>
int main()
{
	char s1[20];
	scanf("%[^
]s",s1);
	int i;
	for(i=0;s1[i]!=NULL;i++)
	{
		if(s1[i]>=65 && s1[i]<=90)
		{
			s1[i]=s1[i]+32;
		}
	}
	printf("%s",s1);
}