#include <stdio.h>

int main() {
    int input_value = 0;
    int value_to_guess = 55;   
    int guesses = 3;

    while(guesses != 0) {
        scanf("%d ", &input_value);
        if ( input_value > value_to_guess ) {
            printf("Too high!\n");
            guesses -= 1;
            printf("guesses remaining: %d", guesses);
        }
        if (input_value < value_to_guess) {
            printf("Too low!\n");
            guesses -= 1;
            printf("guesses remaining: %d", guesses);
        }

        if (input_value == value_to_guess) {
            printf("YOU GUESSED RIGHT !!~");
            break;
        }
    }

    if guesses == 0 
        printf("GAME OVER!!!!\n NOOOOOOOOOOOOOOOOOOB !!!!!");
        return 0;

    return 0;
}
