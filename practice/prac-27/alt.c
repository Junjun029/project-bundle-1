// This is actually how the teacher taught me to solve the problem
// not alternative
// but whatever
// I did my best on the main file
// 5 while loops
// lol

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
    int balance = 0;

    //dollar
    dollar += changeAmount/dollarVal;
    changeAmount -= dollarVal*dollar;
    
    //quarter
    quarter += changeAmount/quarterVal;
    changeAmount -= quarterVal*quarter;

    //dime
    dime += changeAmount/dimeVal;
    changeAmount -= dimeVal*dime;

    //nickel
    nickel += changeAmount/nickelVal;
    changeAmount -= nickel*nickelVal;

    //balance
    balance = changeAmount;

    printf("=====================\n");
    printf("Dollars: %d\n", dollar);
    printf("Quarters: %d\n", quarter);
    printf("Dimes: %d\n", dime);
    printf("Nickels: %d\n", nickel);
    printf("Pennies: %d\n", balance);

    return 0;
}
