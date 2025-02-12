#include <stdio.h>

int main() {
    int age, citizen;

    scanf("%d %d", &age, &citizen);

    printf("%s\n", (age >= 18 && citizen == 1) ? "Eligible" : "Not Eligible");

    return 0;
}