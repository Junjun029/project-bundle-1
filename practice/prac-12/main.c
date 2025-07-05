/* Sigma expression
*/
#include <stdio.h>

int main() {
    int input_value = 0;
    double sum = 0.0;

    scanf("%d", &input_value);

    for(int i = 1;i <= input_value;i++) {
        sum += (i+3.0) / (i*i -5.0);
    }

    printf("%lf", sum);

    return 0;
}
