#include<stdio.h>

int main()
{
	int num;
	printf("\n Enter an Integer : ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("\n The integer %d is Even.",num);
	}
	else
	{
		printf("\n The integer %d is Odd.",num);
	}
	return 0;
}