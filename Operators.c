#include <stdio.h>

int main() {
    int num1 = 10, num2 = 3;
    int sum, difference, product;
    float division;

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    division = (float) num1 / num2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Division: %.2f\n", division);

    return 0;
}
/*
Sum: 13
Difference: 7
Product: 30
Division: 3.33

Process returned 0 (0x0)   execution time : 0.031 s
Press any key to continue.
*/
