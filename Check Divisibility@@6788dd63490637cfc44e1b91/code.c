#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    // Check divisibility by 5 or 11 using modulus operator
    if (a % 5 == 0 || a % 11 == 0) {
        printf("Divisible\n");
    } else {
        printf("Not Divisible\n");
    }

    return 0;
}
