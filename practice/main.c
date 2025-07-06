#include <stdio.h>

int main() {
    int a=0,b=0,c=0,d=0;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if ((a+b)==(c+d)) {
        printf("Lucky number!\n");
        return 0;
    }

    printf("Not lucky number!\n");

    return 0;
}
