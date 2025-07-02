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
    
    

    return 0;
}
