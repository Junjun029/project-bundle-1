/* power function 
*/

#include <stdio.h>
#include <stdio.h>

double power(int base, int exponent) {
   int result = 1;
   for(int j = 0;j < exponent; j++) {
        result *= base;
   }

   return result;
}

int main() {
    int x = 0;
    int y = 0;
    printf("base:");
    scanf("%d", &x);
    printf("exponent:");
    scanf("%d", &y);
    printf("%d ^ %d = %lf", x,y,power(x,y));
    

    return 0;
}
