#include <stdio.h>

void printArrRow(double arr[][9], int row, int col) {
    for (int i = 0;i<row;i++) {
        for(int j = 0;j<col;j++) {
            printf("%.2lf ", arr[i][j]);
        }
        printf("\n");
    }
}

void printArrCol(double arr[][9], int row, int col) {
    for(int i = 0;i<col;i++) {
        for(int j = 0;j<row;j++) {
            printf("%.2lf ", arr[j][i]);
        }
        printf("\n");
    }
}

int main() {
    double arr[5][9] = {
                    {1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9},
                    {2.1,2.2,2.3,2.4,2.5,2.6,2.7,2.8,2.9},
                    {3.1,3.2,3.3,3.4,3.5,3.6,3.7,3.8,3.9},
                    {4.1,4.2,4.3,4.4,4.5,4.6,4.7,4.8,4.9},
                    {5.1,5.2,5.3,5.4,5.5,5.6,5.7,5.8,5.9}
    };

    printArrRow(arr, 5, 9);

    printf("\n\n");
    
    printArrCol(arr, 5, 9);

    return 0;
}
