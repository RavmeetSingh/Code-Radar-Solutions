#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if((a%4==0)&&a!=1900){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
}