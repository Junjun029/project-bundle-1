/* practice number seven 
* 1 4 7 10 <= N
*/
#include <stdio.h>

int main() {
    int input_value = 0;
    int N = 1;
    int sum_of_N = 0;

    scanf("%d", &input_value);

    for(; N <= input_value;N+=3) {
        printf("%d ", N);
        if (N > input_value) {
            break;
        }   
        
        if (N <= input_value) {
            printf("+");
        }
        sum_of_N += N;
    }
    
    printf("\nsum: %d\n", sum_of_N);

    N = 0;

    return 0;
}
