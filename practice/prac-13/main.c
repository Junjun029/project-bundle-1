#include <stdio.h>

int main() {
    int input_value = 0;
    double sum = 0;

    scanf("%d", &input_value);

    for(int n = 1;n <= input_value;n++) {
        if (input_value%7) {
            sum += input_value/(double)n;
        }else {
            sum += 1.0/(double)n;
        }
    }

    printf("Sum = %lf\n", sum);

    return 0;
}
