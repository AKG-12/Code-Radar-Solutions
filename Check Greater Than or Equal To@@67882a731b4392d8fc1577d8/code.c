#include <stdio.h>
#include <stdbool.h>  // Include for bool, true, false

int main() {
    int num1, num2;
    bool result;  // Boolean variable

    // Input two numbers
    
    scanf("%d", &num1);

   
    scanf("%d", &num2);

    result = (num1 >= num2);

    if (result) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
