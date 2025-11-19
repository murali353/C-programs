#include<stdio.h>
void main()
{
	int i,c=0,n;
	printf("ENTER THE NUMBER:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("THE GIVEN NUMBER IS PRIME NUMBER");
	}
	else
	{
		printf("THE GIVEN NUMBER IS NOT A PRIME NUMBER");
	}
}
