#include <stdio.h>
#include <stdlib.h>

void displayGridDefault();
void displayGrid(int game[][3]);
void play(int game[][3]);
int checkWin(int game[][3], int player);

int main() {
    int game[3][3] = {  {-1,-1,-1}, // 0 = o, 1 = x, -1 = " "
                        {-1,-1,-1},
                        {-1,-1,-1}
    };

    play(game);

    return 0;
}

void play(int game[][3]) {
    int player = 1;
    int playerChoice = 0;
    int full = 0;
    
    while(1) {
        system("clear");
        system("figlet Tic Tac Toe!");
        printf("\n===============================================================\n");
        displayGridDefault();
        printf("\n===============================================================\n");
        displayGrid(game);

        if(checkWin(game, player) == 1) {
            system("figlet Player 1 Wins!");
            return;
        }else if(checkWin(game, player) == 0) {
            system("figlet Player 2 Wins!");
            return;
        }

        if(full == 9) {
            system("figlet DRAW!");
            return;
        }

        printf("Player %d : ", player ? 1:2);
        scanf("%d", &playerChoice);
        switch(playerChoice){
            case 1: 
                if(game[0][0] >= 0) {
                    continue;
                }
                game[0][0] = player;
                full++;
                break;
            case 2: 
                if(game[0][1] >= 0) {
                    continue;
                }
                game[0][1] = player;
                full++;
                break;
            case 3: 
                if(game[0][2] >= 0) {
                    continue;
                }
                game[0][2] = player;
                full++;
                break;
            case 4: 
                if(game[1][0] >= 0) {
                    continue;
                }
                game[1][0] = player;
                full++;
                break;
            case 5: 
                if(game[1][1] >= 0) {
                    continue;
                }
                game[1][1] = player;
                full++;
                break;
            case 6: 
                if(game[1][2] >= 0) {
                    continue;
                }
                game[1][2] = player;
                full++;
                break;
            case 7: 
                if(game[2][0] >= 0) {
                    continue;
                }
                game[2][0] = player;
                full++;
                break;
            case 8: 
                if(game[2][1] >= 0) {
                    continue;
                }
                game[2][1] = player;
                full++;
                break;
            case 9: 
                if(game[2][2] >= 0) {
                    continue;
                }
                game[2][2] = player;
                full++;
                break;
            default:
                continue;
        }
        if(player || !player) {
            player = !player;
        }
    }
}

int checkWin(int game[][3], int player) {
    int result = 0;
    if(game[0][0] == game[0][1] && game[0][1] == game[0][2] && game[0][2] == player)
        result = player;
    if(game[1][0] == game[1][1] && game[1][1] == game[1][2] && game[1][2] == player)
        result = player;
    if(game[2][0] == game[2][1] && game[2][1] == game[2][2] && game[2][2] == player)
        result = player;
    if(game[0][0] == game[1][0] && game[1][0] == game[2][0] && game[2][0] == player)
        result = player;
    if(game[0][1] == game[1][1] && game[1][1] == game[2][1] && game[2][1] == player)
        result = player;
    if(game[0][2] == game[1][2] && game[1][2] == game[2][2] && game[2][2] == player)
        result = player;
    if(game[0][0] == game[1][1] && game[1][1] == game[2][2] && game[2][2] == player)
        result = player;
    if(game[0][2] == game[1][1] && game[1][1] == game[2][0] && game[2][0] == player)
        result = player;
    return result;
}

void displayGridDefault() {
    for(int i = 1;i <= 9;i++) {
        printf("\t%d\t%s", i, i%3 ? "|":"\n");
    }
}

void displayGrid(int game[][3]) {
    for(int i = 0;i < 3;i++) {
        for(int j = 0;j < 3;j++) {    
            if(game[i][j] == -1) 
                printf("\t \t%s", j == 2?"\n":"|");
            else if(game[i][j] == 0)
                printf("\tO\t%s", j == 2?"\n":"|");
            else if(game[i][j] == 1) 
                printf("\tX\t%s", j == 2?"\n":"|");
        } 
    }
}
