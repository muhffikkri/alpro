#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the add function
    sum = add(num1, num2);

    // Print the result
    printf("Sum: %d\n", sum);

    return 0;
}