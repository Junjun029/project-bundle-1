#include <stdio.h>

int main() {
    int a = 0, b = 0;

    int gcd = 0;
    
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    int max, min;
    max = (a - b) > 0 ? a : b;
    min = (a - b) < 0 ? a : b;
    
    // gcd
    for(int i = 1;i <= min;i++) {
       if (min%i == 0 && max%i == 0) {
            gcd = i;
            printf("%d ", gcd);
       }
    }

    printf("\ngcd: %d\n", gcd);

    // lcm
    int lcm  = (min/gcd)*max;
    printf("lcm: %d\n", lcm);
    
    return 0;
}
