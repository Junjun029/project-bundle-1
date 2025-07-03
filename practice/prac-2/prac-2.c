/* reading integer input until the sum  exceeds 100
*/

#include <stdio.h>

int main() {
    int sum = 0;
    int input_val = 0;

    for(;sum <= 100;) {
        scanf("%d", &input_val);
        sum += input_val;
        printf("sum: %d\n", sum);
    }

    printf("exceeds 100.\nsum: %d", sum);

    return 0;
}
