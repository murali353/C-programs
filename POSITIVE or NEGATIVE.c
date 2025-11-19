#include<stdio.h>
void main()
{
	int a;
	printf("ENTER THE NUMBER:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("IT IS A POSITIVE NUMBER");
	}
	else if(a<0)
	{
		printf("IT IS A NEGATIVE NUMBER");
	}
	else
	{
		printf("IT IS EITHER POSITIVE or EITHER NEGATIVE");
	}
}
