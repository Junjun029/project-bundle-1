#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int count = 0;

void addNumber(int list[]) {
    int userInput = 0;
    scanf("%d", &userInput);

    list[count] = userInput;
    count++;   
}

void removeNumber(int list[]) {
    int toRemove = 0;
    scanf("%d", &toRemove);

    int index = findNumber(list, toRemove);

    if(index < 0) {
        printf("Couldn't find the number specified.\n");
        return;
    }

    count--;
    for(int i = index;i < count;i++) {
        list[i] = list[i+1];
    }   
}

void printList(int list[]) {
    printf("[ ");
    for(int i = 0;i < count;i++) {
        printf("%d ", list[i]);
    }
    printf("]");
}

int findNumber(int list[], int searchElement) {
    for(int i = 0;i < count;i++) {
        if(list[i] == searchElement)
            return i;
    }   
    return -1;
}
