/* prime number checker
*/
#include <stdio.h>

int main() {
    int input_value = 0;
    int prime = 0;
    scanf("%d", &input_value);

    for(int j = 1;j<=input_value;j++) {
        if((input_value%j)==0 && ((j != 1) && (j != input_value))) {
            prime = 0;
            break;
        }
        prime = 1;
    }

    if (prime) {
        printf("%d is prime\n", input_value);
    }else {
        printf("%d is not prime\n", input_value);
    }

    return 0;
}
