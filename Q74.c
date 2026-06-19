# include <stdio.h>
int main(){
int r1,r2,c1,c2,i,j;
int a[10][10],b[10][10],c[10][10];
printf("Enter rows and columns for first matrix: ");
scanf("%d %d",&r1,&c1);
printf("Enter rows and columns for second matrix: ");
scanf("%d %d",&r2,&c2);
if(r1==r2 && c1==c2){
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<r2;i++){
    for(j=0;j<c2;j++){
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        c[i][j]=a[i][j]-b[i][j];
    }
}
printf("Substraction of matrices:\n");
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        printf("%d ",c[i][j]);
    }
    printf("\n");
}
}
else{
    printf("Matrices subtraction is not possible.");
}
return 0;
}