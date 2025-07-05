#include <stdio.h>

int main() {
    int min = 0, max = 0, input_value = 0;

    scanf("%d", &input_value);
    max = min = input_value;
    
    for(int i = 1;i<=9;i++) {
        scanf("%d", &input_value);
        if(input_value > max) {
            max = input_value;
        }
        if (input_value < min) {
            min = input_value;
        }
    }

    printf("min: %d\nmax: %d\n", min, max);

    return 0;
}
