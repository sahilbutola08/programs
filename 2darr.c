#include<stdio.h>

int main()
{
	int arr[10][10],r,c,i,j;
	printf("How many rows and column you want to enter : ");
	scanf("%d %d",&r,&c);
	printf("\nEnter The array : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&arr[i][j]);
	    }
	}
	printf("\nYour Array is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		puts("\n");
	}
	return 0;
}