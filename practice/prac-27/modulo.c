#include <stdio.h>

int main() {
    const int dollarVal = 100;
    const int quarterVal = 25;
    const int dimeVal = 10;
    const int nickelVal = 5;   
    
    int changeAmount = 0;
    printf("Enter the amount of change you've got: ");
    scanf("%d", &changeAmount);

    int dollar = 0, quarter = 0, dime = 0, nickel = 0, balance = 0;
   
    dollar = (changeAmount - changeAmount%100)/100;
    quarter = (changeAmount%100 - ((changeAmount - dollar*100)%25))/25;
    dime = ((changeAmount - dollar*100)%25 - ((changeAmount - dollar*100)%25)%10)/10;
    balance  = (changeAmount%100 - quarter*25 - dime*10);
    nickel = (balance - balance%5)/5;

    printf("============================\n");
    printf("Dollars: %d\n", dollar);
    printf("Quarters: %d\n", quarter);
    printf("Dimes: %d\n", dime);
    printf("Nickels: %d\n", nickel);
    printf("Pennies: %d\n", balance-nickel*5);

    return 0;
}
