#include<stdio.h>
void main()
{
	int i,n,c=0;
	printf("ENTER A NUMBER:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c!=0)
	{
		printf("THE GIVEN NUMBER IS NOT A PRIME NUMBER");
	}
	else
	{
		printf("THE GIVEN NUMBER IS PRIME NUMBER");
	}
}
