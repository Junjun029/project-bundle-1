#include <stdio.h>

int check_occurence(int arr[], int n, int num) {
    int occ = 0;

    for(int i = 0;i < n;i++) {
        if (arr[i] == num) {
            occ += 1;
        }
    }

    return occ;
}

int main() {
    int numbers[] = {8, 4, 4, 4, 4, 2, 4, 4, 4,4, 2,2, 2,2,2,2};

    printf("%d", check_occurence(numbers, 16, 4));
}
