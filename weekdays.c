#include<stdio.h>

int main()

{
	int week;
	printf("\nEnter Week Number : ");
	scanf("%d",&week);
	switch(week){
		case 1 : printf("\nMonday.");
		break;
		case 2 : printf("\nTuesday");
		break;
		case 3 : printf("\nWednesday");
		break;
		case 4 : printf("\nThursday");
		break;
		case 5 : printf("\nFriday");
		break;
		case 6 : printf("\nSaturday");
		break;
		case 7 : printf("\nSunday");
		break;
		default : printf("\nYou have entered wrong week number!");
		break;
	}
	return 0;
}