#include<stdio.h>

int main()
{
	int arr[20],i,N;
	printf("how many integers you want to enter : ");
	scanf("%d",&N);
	printf("\nEnter Array : ");
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Your Array is : ");
	for(i=0;i<N;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}