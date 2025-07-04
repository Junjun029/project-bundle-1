/* prime number checker
*/
#include <stdio.h>

int isPrime(int n) {

    for(int j = 1;j<=n;j++) {
        if((n%j)==0 && ((j != 1) && (j != n))) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int input_value = 0;
    
    scanf("%d", &input_value);

    int prime = isPrime(input_value);

    if (prime) {
        printf("%d is prime\n", input_value);
    }else {
        printf("%d is not prime\n", input_value);
    }

    return 0;
}
