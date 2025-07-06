#include <stdio.h>

void fillArr(int arr[], int n) {
    int temp = 0;
    for(int i = 0;i<n;i++) {
        scanf("%d", &temp);
        if(temp>150) {
            arr[i] = arr[i];
            i -= 1;
            continue;
        }
        arr[i] = temp;

    }
}

void printArr(int arr[], int n) {
    for(int i = 0;i < n;i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[5] = {};
    
    fillArr(arr, 5);
    printArr(arr, 5);

    return 0;
}
