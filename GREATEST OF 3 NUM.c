#include<stdio.h>
void main()
{
	int x,y,z;
	printf("ENTER THE VALUE OF x:");
	scanf("%d",&x);
	printf("ENTER THE VALUE OF y:");
	scanf("%d",&y);
	printf("ENTER THE VALUE OF z:");
	scanf("%d",&z);
	if(x>y && x>z)
	{
		printf("THE VALUE %d IS GREATER ",x);
	}
	else if(y>x && y>z)
	{
		printf("THE VALUE %d IS GREATER",y);
	}
	else
	{
		printf("THE VALUE %d IS GREATER",z);
	}
}
