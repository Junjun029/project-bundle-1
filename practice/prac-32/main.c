#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int main() {
    /**
     *  - Add numbers
     *  - Remove numbers
     *  - Sort numbers
     *  - Find numbers
     * */
    int choice = 0;
    int list[50] = {};

    do {
        printf("\n1. Add number\n");
        printf("2. Remove number\n");
        printf("3. Print\n");
        printf("4. Print sorted\n");
        printf("5. Find number\n");
        printf("6. Exit\n\n\n");
        printf("What'dya wnna do? ");
        
        scanf("%d", &choice);
        if(choice == 1) {
            addNumber(list);
            system("clear"); 
        }else if(choice == 2) {
            system("clear");
            removeNumber(list);
        }else if(choice == 3) {
            system("clear");
            printList(list);
        }else if(choice == 4) {
            system("clear");
            //printSorted(list);
        }else if(choice == 5) {
            int userInput = 0;
            printf("Please enter the number in which\nyou wish to find in the list\n:");
            scanf("%d", &userInput);
            int found = findNumber(list, userInput);
            system("clear");
            printf("%s", found > -1 ? "Found.\n" : "Not Found.\n");
        }
    }while(choice != 6);

    return 0;
}
