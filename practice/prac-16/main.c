#include <stdio.h>

int main() {
    int a = 0, b = 0;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    
    int max, min;
    max = (a - b) > 0 ? a : b;
    min = (a - b) < 0 ? a : b;

    // gcd
    for (int i = 1; i <= min; i++) {
        printf("%d ", i);
        if (a % i == 0 && b % i == 0){
            printf("gcd: %d\n", i);
            break;
        }
    }
    
    return 0;
}
