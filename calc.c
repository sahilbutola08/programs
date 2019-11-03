#include<stdio.h>

int main()
{
	int num1,num2,result,choice;
	printf("Enter first Number : ");
	scanf("%d",&num1);
	printf("\nEnter second Number : ");
	scanf("%d",&num2);
	puts("Select Operation :");
	puts("1.Add \n2. Subtract\n3. Divide\n4. Multiply");
	puts("Enter Choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 : result=num1+num2;
		printf("Result : %d\n",result);
		break;
		case 2 : result=num1-num2;
		printf("Result : %d\n",result);
		break;
		case 3 : result=num1/num2;
		printf("Result : %d\n",result);
		break;
		case 4 : result=num1*num2;
		printf("Result : %d\n",result);
		break;
	}
	return 0;
}