#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            if(i==1||i==4||j==1||j==4)
            printf("*");
            else
            printf("\n");
        }
    }
}