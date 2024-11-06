#include <stdio.h>

int main() 
{
char taste ='g';
int emptyplate = 10;
int sfull = 0;

do {
printf("\n have a bite of food\n");
emptyplate --;
printf("\n stomach full (1/0): ");
scanf("%d",&sfull);
printf("how was the taste (g/b): ");
scanf(" ");
taste =getchar();
printf("\n empty plate value:%d", emptyplate);
} while((taste== 'g') && (sfull ==0) && (emptyplate>=0));
printf("\n pprogram ended\n");
return 0;
}

