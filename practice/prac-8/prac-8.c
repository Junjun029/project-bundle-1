/* Practice number EIGHT, sum of even numbers before input value N
*/
#include <stdio.h>

int main() {
    int input_value = 0;
    int sum = 0;
    scanf("%d", &input_value);

    for(int j = 0;j<=input_value;j++) {
        if((j%2)==0 && j) { // '&& j' --> and j is not 0 'zero'
            sum += j;
            printf(" %d ", j);
            if(j+2<=input_value) {
                printf("+");
            }
        }
    }

    printf("= %d\n", sum);

    return 0;
}
