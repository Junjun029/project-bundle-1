// show multiples of 7 in an array
#include <stdio.h>
#include <stdint.h>

int main() {
    int arr[] = {5, 5, 5, 35, 49, 371, 770};
    uintptr_t addr1 = 0, addr2 = 0, num = 12;

    int size = 0;
    /**
    printf("%d\n", &arr[4]);
    printf("%d\n", &arr[5]);
    printf("%d\n", &arr[6]);
    printf("%d", &arr[7]);
**/
    while(1) {
        int i = 1;
        addr1 = (uintptr_t)&arr[i-1];
        addr2 = (uintptr_t)&arr[i];
        if (addr2 != addr1 + (uintptr_t)4 || addr2 != addr1 - (uintptr_t)4) {
            break;
        }   
        size += 1;
        i++;
    }

    printf("%d", size);

    return 0;
}
