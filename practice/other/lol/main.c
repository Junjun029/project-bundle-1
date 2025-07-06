#include <stdio.h>

int main() {
    printf("Enter a 4 digit number with spaces inbetween each number!\n ex: 4 3 3 4\n>");
    int a = 0, b = 0, c = 0, d = 0;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    a+b==c+d ? printf("Lucky!\n") : printf("Not Lucky!\n");

    return 0;
}
