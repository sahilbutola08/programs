#include<stdio.h>

int main()
{
	float radius,peri;
	printf("Enter The Radius Of The  Circle : ");
	scanf("%f",&radius);
	peri=2*3.14*radius;
	printf("\nPerimeter Of The Circle : %.2f",peri);
	return 0;
}