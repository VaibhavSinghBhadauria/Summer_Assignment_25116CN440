#include <stdio.h>
int main(){
int arr[50],i,n;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter arr[%d]",i);
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
printf("arr[%d] = %d\n",i,arr[i]);
}
return 0;
}