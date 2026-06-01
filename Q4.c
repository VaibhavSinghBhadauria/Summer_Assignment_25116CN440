#include<stdio.h>
int main(){
int i,n,digits=0;
printf("Enter a number: ");
scanf("%d",&n);
while(n!=0){
    n=n/10;
    digits++;
}
printf("The number of digits in the number entered is: %d",digits);
    return 0;
}
