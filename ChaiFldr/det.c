#include <stdio.h>

int main()
{
int slno;
int ID;
int phno;
float salary;
char add[20];
char degn[20];
char name[20];
char gender;
printf("enter the slno:");
scanf("%d",&slno);

printf(" enter enter th ID:");
scanf("%d",&ID);

printf(" enter the phno:");
scanf("%d",&phno);

printf(" enter the salary:");
scanf("%f",&salary);

printf("enter the add:");
scanf("%s",&add);

printf(" enter the degn:");
scanf("%s",&degn);

printf(" enter the name:");
scanf("%s",&name);

printf(" enter the gender:");
scanf(" ");
scanf("%c",&gender);

printf("\n slno | ID | phno | salary | add | degn | name | gender");
printf("\n %03d | %d | %d | %f | %s | %s | %s | %c",slno,ID,phno,salary,add,degn,name,gender);


return 0;
}

