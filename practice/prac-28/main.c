//Tic tac toe
//Bismillah
//@juna

#include <stdio.h>
#include <stdlib.h>

void displayGridDefault();
void displayGrid(int game[][3]);

int main() {
    int game[3][3] = {{-1,-1,-1},
                      {-1,-1,-1},
                      {-1,-1,-1}
    };

    displayGridDefault();

    return 0;
}

void displayGridDefault() {
    for(int i = 1;i<=9;i++) {
        printf("\t%d\t!", i);
        if(i%3==0) {
            printf("\n");
        }
    }
}

void displayGrid(int game[][3]) {
    for(int i = 0;i<3;i++) {
        for(int j = 0;j<3;j++) {
            if(game[i][j] == 1) {
                printf("\tX\t!");
            }
            if(game[i][j] == 0) {
                printf("\tO\t!");
            }
            if(game[i][j] == -1) {
                printf("\t\t!");
            }
        }
        printf("\n");
    }
}
