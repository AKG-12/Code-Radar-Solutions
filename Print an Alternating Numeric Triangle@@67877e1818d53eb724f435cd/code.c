#include <stdio.h>

int main() {
    int n, start;
   
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        start = (i % 2 == 0) ? 1 : 0; 

        for (int j = 0; j <= i; j++) {
            printf("%d ", start);
            start = 1 - start; 
        }
        printf("\n");
    }

    return 0;
}