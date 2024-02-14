#include <stdio.h>

int findMax(int num1, int num2);

int main() {
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = findMax(a, b);

    printf("Maximum number: %d\n", max);

    return 0;
}

int findMax(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}
/*
Enter two numbers: 5 7
Maximum number: 7

Process returned 0 (0x0)   execution time : 4.898 s
Press any key to continue.
*/
