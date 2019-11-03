#include<stdio.h>

int main()
{
	float C,F;
	int choice;
	puts("what do you want to do ? ");
	puts("1. Convert Celsius to Fahrenheit.");
	puts("2. Convert Fahrenheit to Celsius.");
	puts("Enter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 : printf("Enter Celsius : ");
		scanf("%f",&C);
		F=(C*1.8)+32;
		printf("\n Fahrenheit : %.3f",F);
		break;
		case 2 : printf("Enter Fahrenheit : ");
		scanf("%f",&F);
		C=(F-32)/1.8;
		printf("\n  : %.3f",C);
		break;
	}
	return 0;
}