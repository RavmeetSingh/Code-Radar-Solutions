#include<stdio.h>
int main(){
    int i,j,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            printf("* ");
        }
        for(i=N-1;i>=1;i--){
            printf("*");
        }
        printf("\n");
    }
}