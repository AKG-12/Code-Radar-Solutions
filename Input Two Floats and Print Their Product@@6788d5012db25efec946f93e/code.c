#include <stdio.h>

int main() {
    float a,b;
    scan("%f %f", &a, &b);
    float x = a+b;

    printf("Product: %.2f",x);
    return 0;
}