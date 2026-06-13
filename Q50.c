#include <stdio.h>
int main(){
    int arr[50],i,n,sum=0;
     float avg=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter arr[%d]", i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    avg=sum/n;
    printf("Sum = %d\n", sum);
    printf("Average = %f\n", avg);
    return 0;
}