#include<stdio.h>

int main()
{
	int num,reverse=0,digit;
	printf("Enter an Integer(min. 2 digits) : ");
	scanf("%d",&num);
	int temp=num;
	while(temp>0)
	{
		digit=temp%10;
		reverse=(reverse*10)+digit;
		temp/=10;
	}
	printf("\n Reverse of given Integer %d is %d.",num,reverse);
	return 0;
}