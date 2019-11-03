#include<stdio.h>
int main()
{
int arr[10],ele,i,flag=0;
printf("enter 10 integers:");
for( i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
printf("\n enter element you want to search:");
scanf("%d",&ele);
for(int i=0;i<10;i++)
{
if(arr[i]==ele)
{
printf("\n element is found :)index:%d\t position:%d\n",i,i+1);
flag=1;
break;}
}
if(flag==1)
{
printf("element is not found ");
}
return 0;
}