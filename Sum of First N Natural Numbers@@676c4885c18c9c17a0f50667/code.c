#include<stdio.h>
int main(){
    int i,N;
    scanf("%d",&N);
    int sum = 0;
    for(i=1;i<=N;i++){
        sum = sum + i;
    }
    printf("%d",sum);
}