#include <stdio.h>

int get_max(int arr[], int size) {
    int max = 0;
    int i = 0;
    max = arr[0];
    while(i < size) {
        max = arr[i] > max ? arr[i] : max;
        i++;
    }

    return max;
}

int get_min(int arr[], int size) {
    int min = 0;
    int i = 0;
    min = arr[0];
    while(i < size) {
        min = arr[i] < min ? arr[i] : min;
        i++;
    }

    return min;
}

int checky(int arr[], int n) {
    int min = 0, max = 0;
    min = max = arr[0];

    for(int i = 0;i < n; i++) {
        max = arr[i] > max ? arr[i] : max;
        min = arr[i] < min ? arr[i] : min;
    }   

    int max_occ = 0;
    int min_occ = 0;

    for(int i = 0;i<=n;i++) {
        max_occ += arr[i] == max ? 1:0;
        min_occ += arr[i] == min ? 1:0;
    }

    printf("Max: %d, occured %dx\nMin: %d, occured %dx\n", get_max(arr, 13), max_occ, get_min(arr, 13), min_occ);


}


int main() {
    int numbers[] = {2,5,5,9,9,4,2,2,2,9,9,9,9};

    checky(numbers, 13);

    

    return 0;
}
