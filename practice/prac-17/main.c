#include <stdio.h>

int fibonacci(int n) {
    int a = 1, b = 1, c = 0;
    if (n == 1 || n == 2) {
        return a;
    }
    for(int i = 2;i<n;i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    int input_value = 0;
    scanf("%d", &input_value);
    printf("%d ", fibonacci(input_value));

    return 0;
}
