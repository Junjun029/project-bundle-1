#include <stdio.h>


int main() {
    double arr[5][12] = { //5 years, 12 months
                    {1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,3.3,4.3,2.3},
                    {2.1,2.2,2.3,2.4,2.5,2.6,2.7,2.8,2.9,2.1,3.2,1.2},
                    {3.1,3.2,3.3,3.4,3.5,3.6,3.7,3.8,3.9,2.2,3.8,2.3},
                    {4.1,4.2,4.3,4.4,4.5,4.6,4.7,4.8,4.9,3.4,2.1,3.4},
                    {5.1,5.2,5.3,5.4,5.5,5.6,5.7,5.8,5.9,5.3,4.3,4.4}
    };
    
    double avg[12] = {};
    double total[5] = {};

    // monthly average
    for(int i = 0; i<12;i++) {
        for(int j = 0;j<5;j++) {
            avg[i] += arr[j][i];
        }
        avg[i] = avg[i] / 5;
    }   

    for(int n = 0;n < 12;n++) {
        printf("%.2lf\n", avg[n]);

    }

    //yearly total precipitation
    for(int i = 0;i<5;i++) {
        for(int j = 0;j<12;j++) {
            total[i] += arr[i][j];
        }
    }

    for(int n = 0;n < 5;n++) {
        printf("\n%.2lf\n", total[n]);
    }

    return 0;
}
