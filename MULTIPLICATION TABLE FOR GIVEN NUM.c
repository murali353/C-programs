#include<stdio.h>
void main()
{
	int n,prod,i;
	printf("ENTER A NUMBER:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		prod=n*i;
		printf("%d * %d = %d\n",n,i,prod);
	}
	
	
}
