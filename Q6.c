#include <stdio.h>
int main(){
int rev=0,r=0,n;
printf("Enter a number: ");
scanf("%d",&n);
while(n>0){
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
printf("Reverse of number is: %d\n", rev);

    return 0;
}