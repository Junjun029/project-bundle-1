/* same as prac-2, but with do-while loop
*/

#include <stdio.h>

int main() {
    int input_value = 0;
    int sum = 0;
    
    do {
        printf("> ");
        scanf("%d", &input_value);
        sum += input_value;
        printf("sum: %d\n", sum);

    }while(sum <= 100);
    
    printf("Exceeds 100\nfinal sum: %d\n", sum);

    return 0;
}
