/* divisor and strict divisor
*/

#include <stdio.h>

int main() {
    int input_value = 0;
    printf("> ");
    scanf("%d", &input_value);

    printf("The divisors of %d is: ", input_value);
    for(int j = 1; j <= input_value;) {
        if (input_value % j == 0) {
            printf("%d ", j);
        }
        j++;
    }
    printf("\n");

    return 0;
}
