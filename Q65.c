#include<stdio.h>
int main(){
    int a[50],n,i;
    int b[50], c[50];
printf("Enter the size of the array: ");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("Enter a[%d]: ",i);
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    printf("Enter b[%d]: ",i);
    scanf("%d",&b[i]);
    }
for(i=0;i<n;i++){
    c[i] = a[i] + b[i];
}
for(i=0;i<n;i++){
    printf("Merged Array: c[%d] = %d\n", i, c[i]);
}

return 0;
}