/* perfect number checker
*/

#include <stdio.h>

int main() {
    int input_value = 0;
    int sum = 0;
    scanf("%d", &input_value);
    for(int j = 1;j <= input_value/2;j++) {
        if (input_value%j==0) {
            sum += j;
            printf("%d ", j);
        }
    }
    
    printf("\nsum: %d\n", sum);

    if (sum == input_value) {
        printf("%d is a P E R F E C T number!\n", input_value);
    }else {
        printf("Not a perfect number, sorry %d.\n", input_value);
    }

    return 0;
}
