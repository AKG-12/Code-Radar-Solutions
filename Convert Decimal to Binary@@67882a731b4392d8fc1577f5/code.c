#include <stdio.h>

void printBinary(int num) {
    int i;
    int started = 0; 

    for (i = 31; i >= 0; i--) { 
        if (num & (1 << i)) { 
            started = 1;
            printf("1");
        } else if (started) { 
            printf("0");
        }
    }

    if (!started) { 
        printf("0");
    }

    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);

    printBinary(num); 
    return 0;
}
