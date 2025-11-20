#include<stdio.h>
void main()
{
	int n,i,x;
	printf("ENTER THE NUMBER:");
	scanf("%d",&n);
	printf("ENTER THE NUMBER TO END:");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		printf("%d * %d = %d\n",n,i,(n*i));
	}
	
}
