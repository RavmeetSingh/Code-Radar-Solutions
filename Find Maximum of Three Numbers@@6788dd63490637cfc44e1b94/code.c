#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b  && c<b )
    printf("%d",a);
    else if(a<b && c<a)
    printf("%d",b);
    else
    printf("%d",c);
}
