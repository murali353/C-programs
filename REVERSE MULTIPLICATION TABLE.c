#include<stdio.h>
void main()
{
	int n,i,prod;
	printf("ENTER THE NUMBER:");
	scanf("%d",&n);
	for(i=10;i>=1;i--)
	{
		prod=n*i;
		printf("%d * %d = %d\n",n,i,prod);
	}
}

