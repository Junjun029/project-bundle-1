/* I guess main.c is easier to refer
*/
#include <stdio.h>

int main() {
    int input_value = 0;
    double sigma = 0;

    scanf("%d", &input_value);

    for(int i = 1;i <= input_value; i++) {
        sigma += (i + 3.00)/(i*i-5.00);
    }

    printf("%lf", sigma);

    return 0;
}
