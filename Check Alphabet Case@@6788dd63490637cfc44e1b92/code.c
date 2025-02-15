#include <stdio.h>
int main(){
    char ho;
    scanf("%c",&ho);
    if(ho >= 'A' && ho<= 'Z')
    printf("Uppercase");
    else if(ho >= 'a' && ho <= 'z')
    printf("Lowercase");
    else
    printf("Not a Alphabet");
}