#include <stdio.h> 
int main() 
{ 

	int x, y;
	printf("Enter Two Integers : ");
	scanf("%d %d",&x,&y); 

	x = x + y; 
	y = x - y; 
	x = x - y; 

	printf("After Swapping: x = %d, y = %d", x, y); 

	return 0; 
} 
