#include<stdio.h>
#include<conio.h>

int main(){
int num,n,i;
printf("input enter number of even number you want upto : ");
scanf("%d",&n);
printf("Even numbers are : ");
for(i=1;i<=n;i++){
num = i  % 2;
if (num == 0){

printf("%.2f ",(float)i);
}
}
sleep(10);
return 0;
}