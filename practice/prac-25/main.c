#include <stdio.h>

int totalRainfall(double arr[][12], int row, int col) {
    double sum = 0;
    for(int i = 0;i<row;i++) {
        for(int j = 0;j<col;j++) {
            sum += arr[i][j];
        }
        printf("year %d rainfall: %.2lf\n", i + 1, sum);
        sum = 0.00;
    }
}

int monthlyAvg(double arr[][12], int row, int col) {
    double avg = 0;
    for(int i = 0; i<row;i++) {
        for(int j = 0;j<col;j++) {
            avg  += arr[i][j];
        }
        avg = avg/12;
        printf("Year %d Average: %.2lf\n", i + 1, avg);
        avg = 0.0;
    }
}

int main() {
    double arr[5][12] = { //5 years, 12 months
                    {1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,3.3,4.3,2.3},
                    {2.1,2.2,2.3,2.4,2.5,2.6,2.7,2.8,2.9,2.1,3.2,1.2},
                    {3.1,3.2,3.3,3.4,3.5,3.6,3.7,3.8,3.9,2.2,3.8,2.3},
                    {4.1,4.2,4.3,4.4,4.5,4.6,4.7,4.8,4.9,3.4,2.1,3.4},
                    {5.1,5.2,5.3,5.4,5.5,5.6,5.7,5.8,5.9,5.3,4.3,4.4}
    };

    totalRainfall(arr, 5, 12);
    printf("\n");
    monthlyAvg(arr, 5, 12);

    return 0;
}
