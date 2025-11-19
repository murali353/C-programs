#include<stdio.h>
void main()
{
	int x=5;
	char y='s';
	char z='$';
	if(x==0||x==1||x==2||x==3||x==4||x==5||x==6||x==7||x==8||x==9)
	{
		printf("IT IS AN DIGIT\n");
	}
	if(y>='A' && y<='Z' || y>='a' && y<='z')
	{
		printf("IT IS AN ALPHABET\n");
	}
	if(z=='$')
	{
		printf("IT IS AN SPECIAL CHARACTER\n");
	}
}
