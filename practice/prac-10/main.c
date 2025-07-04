/* if divisible by 7: 1/1 + 1/2 + 1/3 + ... + 1/n
else n/1 + n/2 + n/3 + .. + n/n
*/
#include <stdio.h>

int main() {
    int input_value = 0;
    double sum = 0;

    scanf("%d", &input_value);
    if((input_value%7) == 0) {
        for(int j=1;j<=input_value;j++) {
            sum += (1.0/j);
        }
    }else {
        for(int j=1;j<=input_value;j++) {
            sum += ((double)input_value/j);
        }
    }

    printf("sum: %lf", sum);

    return 0;
}
