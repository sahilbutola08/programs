#include<stdio.h>

 int main()
 {
 	int i,first,last,mid,N,arr[20],ele;
 	printf("\nHow many elements you want to enter(in ascending order)  : ");
 	scanf("%d",&N);
 	printf("\nEnter Elements : ");
 	for(i=0;i<N;i++)
 	{
 		scanf("%d",&arr[i]);
 	}
 	printf("\n Enter element you want to search : ");
 	scanf("%d",&ele);
 	int flag=0;
 	first=0;
 	last=N-1;
 	while(last>=first)
 	{
 		mid=(first + last) / 2;
 		if(arr[mid]==ele)
 		{
 			printf("\n Element is found at position %d",mid+1);
 			flag=1;
 			break;
 		}
 		else if(arr[mid]>ele)
 		{
 			last=mid-1;
 			break;
 		}
 		else{
 			first=mid+1;
 		}
 	}
 	if(flag==0)
 	{
 		printf("\nElement Not found!.\n");
 	}
 	return 0;
 }