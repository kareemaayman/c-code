#include <stdio.h>

int main() {
    // Declare variables to store two numbers
    int num1, num2;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");

    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the sum of the two numbers
    int sum = num1 + num2;

    // Print the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
