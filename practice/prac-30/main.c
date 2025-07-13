#include <stdio.h>
#include <stdlib.h>

void displayGridDefault();
void displayGrid(int game[][3]);
void play(int game[][3]);
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

void play(int game[][3]) {
    int winner = -1;
    int player = 1;
    int playerChoice = 0;
    int full = 0;
    int changed = 0;
    
    while(1) {
        system("clear");
        system("figlet tic tac toe ! :D");
        printf("\n=================================================\n");
        displayGridDefault();
        printf("\n=================================================\n");
        
        displayGrid(game);

        if (winner == 1) {
            printf("Player 1 has won the game.\n");
            return;
        }
        if (winner == 0) {
            printf("Player 2 has won the game.\n");
            return;
        }

        printf("Player %d : ", player ? 1:2);
        scanf("%d", &playerChoice);

        if(full == 9) {
            printf("Draw!\n");
            return;
        }

        switch(playerChoice) {
            case 1:
                if(game[0][0] != -1) {
                    changed = 0;
                    break;
                }
                changed = 1;
                full++;
                game[0][0] = player;
                break;
            case 2:
                if(game[0][1] != -1) {
                    changed = 0;
                    break;
                }
                changed = 1;
                full++;
                game[0][1] = player;
                break;
            case 3:
                if(game[0][2] != -1) {
                    changed = 0;
                    break;
                }
                changed = 1;
                full++;
                game[0][2] = player;
                break;
            case 4:
                if(game[1][0] != -1) {
                    changed = 0;
                    break;
                }
                changed = 1;
                full++;
                game[1][0] = player;
                break;
            case 5:
                if(game[1][1] != -1) {
                    changed = 0;
                    break;
                }
                changed = 1;
                full++;
                game[1][1] = player;
                break;
            case 6:
                if(game[1][2] != -1) {
                    changed = 0;
                    break;
                }
                changed = 1;
                full++;
                game[1][2] = player;
                break;
            case 7:
                if(game[2][0] != -1) {
                    changed = 0;
                    break;
                }
                changed = 1;
                full++;
                game[2][0] = player;
                break;
            case 8:
                if(game[2][1] != -1) {
                    changed = 0;
                    break;
                }
                changed = 1;
                full++;
                game[2][1] = player;
                break;
            case 9:
                if(game[2][2] != -1) {
                    changed = 0;
                    break;
                }
                changed = 1;
                full++;
                game[2][2] = player;
                break;
            default: 
                changed = 0;
                break;
        }
        winner = checkWin(game, player);
        if(changed) 
            player = !player;
    }
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

void displayGridDefault() {
    for(int i = 1;i<=9;i++) 
        printf("\t%d\t%s", i, i%3 ? "|":"\n");
}

void displayGrid(int game[][3]) {
    for(int i = 0;i<3;i++) {
        for(int j = 0;j<3;j++) {
            if(game[i][j] == 1) 
                printf("\tX\t%s", j==2?"\n":"|");
            if(game[i][j] == -1) 
                printf("\t \t%s", j==2?"\n":"|");
            if(game[i][j] == 0) 
                printf("\tO\t%s", j==2?"\n":"|");
        }  
    }  
}
