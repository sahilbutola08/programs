#include<stdio.h>

struct employee{
	int empid;
	char name[50], empdept[50];
	float salary;
};

int main()
{
	struct employee E;
	printf("\nEnter Employee Id : ");
	scanf("%d",&E.empid);
	printf("Ent Employee Name : ");
    scanf("\n%[^\n]%*c",&E.name);
    printf("Enter Employee Department : ");
    scanf("\n%[^\n]%*c",&E.empdept);
    printf("Enter Employee salary : ");
    scanf("%f",&E.salary);
    printf("\n\nEmployee Id : %d\nEmployee Name : %s\nEmployee Department : %s\nEmployee Salary : %f\n",
    E.empid,E.name,E.empdept,E.salary);
	return 0;
}