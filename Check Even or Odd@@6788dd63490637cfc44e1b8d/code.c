#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("%s\n", (num % 2 == 0) ? "Even" : "Odd");
    return 0;
}