#include <stdio.h>
int main(){
int arr[100], n, i;
int countEven=0, countOdd=0;
printf("Enter number of elements: ");
scanf("%d", &n);
for(i = 0; i < n; i++){
    printf("Enter arr[%d]: ", i);
scanf("%d", &arr[i]);
}
for(i = 0; i < n; i++){
    printf("%d\n ", arr[i]);
}
for(i = 0; i < n; i++){
    if(arr[i]%2==0)
        countEven++;
    else
        countOdd++;
}
printf("Even numbers: %d\n", countEven);
printf("Odd numbers: %d\n", countOdd);
return 0;
}