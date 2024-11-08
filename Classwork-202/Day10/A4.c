A4. #include <stdio.h>
 
int main(){
 
int k = 3 , z = 1,temp=0;
 
printf("k=%d\n",k); 
int a[]=(1,2,3,4,5,6,7,8,9);
 int size = sizeof(a) / sizeof(a[0]);
 for(int i=0;i<size;i++)
 
{
printf("%d ",a[i]); 
} 
 
for(int i = 1; i<=size; i++){
 
if(i%k==0){
 
int j=i; 
int l = k;
 for(int n = 1 ;n <= (k / 2) ;n++){
 temp=a[j-(l)];
 a[j - (l)] =a[(l* z)-1];
 a[(l*z)-1]=temp;
 
 
}
 
z++;
} 
}
 
printf("\n");
 
for(int i = 0 i<size;i++) {
 
printf("%d ",a[i]);
 
}
}