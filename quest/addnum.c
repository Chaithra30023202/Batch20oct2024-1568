#include<stdio.h>

int main() {
int n, sum=1;
printf("\n enter the value of n");
scanf("%d",&n);
for(int i=0;i<=n; i++){
//sum = sum+n;
//n = sum;
printf("%d",sum);
if(sum*2<=n){
printf(" , ");
}
sum = sum*2;
}
return 0; 
}

