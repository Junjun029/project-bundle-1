// Tic tac toe
// 2025 - 07 - 10
//
#include <stdio.h>
#include <stdlib.h>

void play(int game[][3]);
void displayGrid(int game[][3]);
void displayGridDefault();
int checkWin(int game[][3], int player);

int main() {
    int game[3][3] = {
        {-1, -1, -1},
        {-1, -1, -1},
        {-1, -1, -1}
    };     
   
    play(game);
    
    return 0;
}

int checkWin(int game[][3], int player) {
    if((player == game[0][0] && player == game[0][1] && player == game[0][2]) || 
       (player == game[1][0] && player == game[1][1] && player == game[1][2]) ||
       (player == game[2][0] && player == game[2][1] && player == game[2][2]) ||
       (player == game[0][0] && player == game[1][0] && player == game[2][0]) ||
       (player == game[0][1] && player == game[1][1] && player == game[2][1]) ||
       (player == game[0][2] && player == game[1][2] && player == game[2][2]) ||
       (player == game[0][0] && player == game[1][1] && player == game[2][2]) ||
       (player == game[0][2] && player == game[1][1] && player == game[2][0]))
        return player;
    return -1;
}

void play(int game[][3]) {
    int player = 1;
    int playerChoice = 0;
    int winner = -1;
    int full = 0;
    // game loop
    while(1) {
        system("clear");
        system("figlet TicTacToe :D");
        printf("\n==================================================\n");
        displayGridDefault();
        printf("\n==================================================\n");
        displayGrid(game);
    
        if(winner==1) {
            printf("The winner is PLAYER 1");
            return;
        }else if(winner == 0) {
            printf("The winner is PLAYER 2");
            return;
        }

        if(full == 9) {
            printf("Game Draw!\n");
            return;
        }
        printf("Player %d : ", player?1:2);
        scanf("%d", &playerChoice);
        switch(playerChoice) {
            case 1:
                if(game[0][0] != -1) {
                    continue;
                }
                full++;
                game[0][0] = player;
                break;
            case 2:
                if(game[0][1] != -1) {
                    continue;
                }
                full++;
                game[0][1] = player;
                break;
            case 3:
                if(game[0][2] != -1) {
                    continue;
                }
                full++;
                game[0][2] = player;
                break;
            case 4:
                if(game[1][0] != -1) {
                    continue;
                }
                full++;
                game[1][0] = player;
                break;
            case 5:
                if(game[1][1] != -1) {
                    continue;
                }
                full++;
                game[1][1] = player;
                break;
            case 6:
                if(game[1][2] != -1) {
                    continue;
                }
                full++;
                game[1][2] = player;
                break;
            case 7:
                if(game[2][0] != -1) {
                    continue;
                }
                full++;
                game[2][0] = player;
                break;
            case 8:
                if(game[2][1] != -1) {
                    continue;
                }
                full++;
                game[2][1] = player;
                break;
            case 9:
                if(game[2][2] != -1) {
                    continue;
                }
                full++;
                game[2][2] = player;
                break;
            default:
                continue;
        }
        
        winner = checkWin(game, player);

        if(player || !player) 
            player = !player;
        
    }
}

void displayGridDefault() {
    for(int i = 1;i<=9;i++) {
        printf("\t%d\t%s", i, i%3 ? "|":"\n");
    }
}

void displayGrid(int game[][3]) {
    for(int i = 0;i<3;i++) {
        for(int j = 0;j<3;j++) {
            if(game[i][j] == 1) 
                printf("\tX\t%s", j!=2? "|":"\n");
            if(game[i][j] == 0) 
                printf("\tO\t%s", j!=2? "|":"\n");
            if(game[i][j] == -1) 
                printf("\t \t%s", j!=2? "|":"\n");
        }
    }
}
