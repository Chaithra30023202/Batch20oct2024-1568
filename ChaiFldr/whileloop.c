#include<stdio.h>
#include<stdlib.h>
#define sucess 0
#define failure -1
#define true 1
#define false 0

int main()
{
int ch;
int flag = 0;
while(1){
ch = displayMenu();

switch(ch) {
case1:
printf("\n Add fuction is executed\n");
break;
 case2:
  printf("\n Sub fuction is executed\n");
 break;
 case3:
  printf("\n Mul fuction is executed\n");
  break;
 case4:
 printf("\n Div fuction is executed\n");
 break;
 case5:
 printf("\nExiiting from the function\n");
 //exit(sucess);
 flag =1;
  break;
  default:
  printf("\n enter the correct choice\n");
  }
  if(flag == 1)
  break;
}
printf("\n program ended \n");
return (sucess);
}

int displayMenu(){
int choice;

printf("\n press,");
printf("\n1. add,");
printf("\n2. sub,");
printf("\n3. mul,");
printf("\n4. div,");
printf("\n5. exit,");
printf("\n choice,");
scanf("%d", &choice);
return choice;
}





