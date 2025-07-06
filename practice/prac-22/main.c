#include <stdio.h>

int main() {
    int arr[] = {1,2,3,7,4,7,12,21,350,728};

    for(int i = 0;i<10;i++) {
        arr[i]%7 == 0 ? printf("%d ", arr[i]) : printf("");
    }

    return 0;
}   
