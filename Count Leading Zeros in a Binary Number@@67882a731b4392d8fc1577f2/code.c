#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    if (num == 0) {
        printf("32\n"); 
        return 0;
    }

    int count = 0;
    unsigned int mask = 1 << 31;  

    while ((num & mask) == 0) {  
        mask >>= 1;  
    }

    printf("%d\n", count);
    return 0;
}
