#include <stdio.h>

int main() {
    int a = 0, b = 0;

    int temp = 0;
    
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
            temp = i;
       }
    }

    printf("gcd: %d\n", temp);
    
    return 0;
}
