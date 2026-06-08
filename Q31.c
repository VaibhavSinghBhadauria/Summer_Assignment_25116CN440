#include<stdio.h>
int main (){
    char j;
    int i;
    for(i=1;i<=5;i++){
        for(j='A';j<'A'+i;j++){
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}