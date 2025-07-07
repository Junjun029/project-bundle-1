/* Cleaning service app
 * @juna
 */
#include <stdio.h>

int main() {
    const int big_price = 52;
    const int small_price = 40;
    const double tax = 0.06;

    int valid_duration = 30;
    int small_room = 0;
    int big_room = 0;
    int small_total = 0;
    int big_total = 0;
    int cost = 0;
    double total = 0.0;

    printf("Hello !\nThis is our Carpet Cleaning Service Application, Welcome!\n\n");

    printf("How many small rooms do you wish to be cleaned? ");
    scanf("%d", &small_room);
    printf("How many large rooms do you wish to be cleaned? ");
    scanf("%d", &big_room);

    printf("\nNumber of small rooms: %d\n", small_room);
    printf("Number of large rooms: %d\n", big_room);

    //price estimation (tax = 0.06)
    printf("\n\nEstimate for carpet cleaning service\n");
    small_total = small_room * small_price;
    big_total = big_room * big_price;
    cost = big_total + small_total;

    printf("Price per small room: $%d\n", small_price);
    printf("Price per big room: $%d\n", big_price);
    printf("Cost: $%d\n", cost);
    
    //total cost
    total = (cost*tax) + cost;
    printf("Tax: $%.2lf\n", tax*cost);
    printf("=======================================================\n");
    printf("Total estimate = $%.2lf\n", total);
    printf("This estimate is valid for %d days\n\n\n\n", valid_duration);


    return 0;
}
