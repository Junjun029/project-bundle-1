#include <stdio.h>

void fillArray(int array[], int index) {
    for(int i = 0; i <= index; i++) {
        scanf("%d", array + i);
    }
}

int main() {
    int numbers[10];
    double sum = 0, product = 1;

    fillArray(numbers, 9);

    for(int i = 0;i<=9;i++) {
        sum += (double)numbers[i];
        product *= (double)numbers[i];
    }

    printf("sum: %lf\nproduct: %lf\n", sum, product);

    return 0;
}

