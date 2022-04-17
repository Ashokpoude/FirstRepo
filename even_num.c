#include<stdio.h>
#include<conio.h>

int main(){
int n,num,i;
printf("input enter number of even number you want upto : ");
scanf("%d",&n);
printf("Even numbers are : ");
for(i=1;i<=n;i++){
num = i  % 2;
if (num == 0){
printf("%d  ",i);
}
}
return 0;
}