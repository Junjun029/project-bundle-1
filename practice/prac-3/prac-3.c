/* program that reads a bunch of integers, stops when the input is negative, then outputs the summary and product of them all
*/

#include <stdio.h>

int main() {
    int product = 1;
    int sum = 0;
    int input_value = 0;

    while(input_value >= 0) {
        printf("> ");
        scanf("%d", &input_value);
        if (input_value < 0) {
            break;
        }
        sum += input_value;
        product *= input_value;
    }

    printf("sum: %d\nproduct: %d\n", sum, product);

    return 0;
}
