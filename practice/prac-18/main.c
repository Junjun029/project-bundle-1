#include <stdio.h>

int main() {
    int a=0, b=0, c=0, d=0;
    char number[4] = {};
    scanf("%s", number);
    if ((int)number[0] + (int)number[1] == (int)number[2] + (int)number[3]) {
        printf("Lucky!\n");
        return 0;
    }
    printf("Unlucky!\n");

    return 0;
}
