#include <stdio.h>

int main() {
    int i;

    // For loop
    printf("For loop:\n");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // While loop
    printf("While loop:\n");
    i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Do-While loop
    printf("Do-While loop:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n");

    return 0;
}
/*
For loop:
1 2 3 4 5
While loop:
1 2 3 4 5
Do-While loop:
1 2 3 4 5

Process returned 0 (0x0)   execution time : 0.033 s
Press any key to continue.
*/
