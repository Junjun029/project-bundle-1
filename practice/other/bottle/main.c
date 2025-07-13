// BOTTLE 
#include <stdio.h>
    
void bottleClosed() {
    printf("    _______    \n");
    printf("   |-------|   \n");
    printf(" ------------- \n");
    printf(" |           | \n");
    printf(" |           | \n"); 
    printf(" |           | \n"); 
    printf(" |           | \n"); 
    printf(" |           | \n"); 
    printf(" ------------- \n"); 
}

void bottleOpened() {
     printf(" \n");
     printf(" \n");
     printf(" ------------- \n");
     printf(" |           | \n");
     printf(" |           | \n"); 
     printf(" |           | \n"); 
     printf(" |           | \n"); 
     printf(" |           | \n"); 
     printf(" ------------- \n");
}

int main() {
    int open = 0;
    int userChoice = 0;
    printf("this is my bottle ==>");
    
    while(1) {
         printf("this is my bottle ==>");
         printf("open? ");
         scanf("%d", &userChoice);
    }
}
