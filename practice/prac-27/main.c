#include <stdio.h>

int main(){
    const int dollarVal = 100;
    const int quarterVal = 25;
    const int dimeVal = 10;
    const int nickelVal = 5;

    int changeAmount = 0;
    printf("Enter the amount of change you've got: ");
    scanf("%d", &changeAmount);
    
    printf("======================\n");
    int dollar = 0;
    int quarter = 0;
    int dime = 0;
    int nickel = 0;

    while(1) {
        changeAmount -= 100;
        if(changeAmount < 0) {
            changeAmount += 100;
            break;
        }
        dollar++;
    }
    
    while(1) {
        changeAmount -= 25;
        if(changeAmount < 0) {
            changeAmount+=25;
            break;
        }
        quarter++;
    }

    while(1) {
        changeAmount -= 10;
        if(changeAmount < 0) {
            changeAmount+=10;
            break;
        }
        dime++;
    }

    while(1) {
        changeAmount-=5;
        if(changeAmount < 0) {
            changeAmount+=5;
            break;
        }
        nickel++;
    }

    printf("Dollar: %d\n", dollar);
    printf("Quarter: %d\n", quarter);
    printf("Dime: %d\n", dime);
    printf("Nickel: %d\n", nickel);
    printf("Pennies: %d\n", changeAmount);


    return 0;
}
