#include <stdio.h>

int main() {
    int input_value, min, max;
    min = max = input_value = 0;
    scanf("%d", &input_value);
    min = max = input_value;

    while(input_value >= 0) {
        scanf("%d", &input_value);
        min = (input_value < min && input_value >= 0) ? input_value : min;
        max = (input_value > max) ? input_value : max;
    }

    printf("min: %d\nmax: %d\n", min, max);

    return 0;
}
