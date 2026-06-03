#include<stdio.h>
int main(){
int n,n1,rem=0,rev=0;
printf("Enter a number: ");
scanf("%d",&n);
n1=n;
while(n1>0){
    rem=n1%10;
    rev=rev*10+rem;
    n1=n1/10;
}
printf("Reverse of the number: %d\n", rev);
if(n==rev){
    printf("The number %d is a palindrome.\n", n);
    
}
else{
    printf("The number is not a palindrome.\n");
}
return 0;
}