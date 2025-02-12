#include <stdio.h>
#include <stdint.h>

int main() {
    int num;
    scanf("%d", &num);

    int msb_mask = 1 << 31;

    if (num & msb_mask)  
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}