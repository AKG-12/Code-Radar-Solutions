#include <stdio.h>

void printReverseAlphabetTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
}

int main() {
    int n;
   
    scanf("%d", &n);

    printReverseAlphabetTriangle(n);
    return 0;
}