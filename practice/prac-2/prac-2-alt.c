/* same as prac-2, but with do-while loop
*/

#include <stdio.h>

int main() {
    int input_value = 0;
    int sum = 0;
    
    do {
        scanf("%d", &input_value);
        sum += input_value;
        printf("sum: %d", sum);

    }while(sum <= 100);
    
    printf("Exceeds 100\nfinal sum: %d", sum);

    return 0;
}
