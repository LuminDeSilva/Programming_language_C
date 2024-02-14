#include <stdio.h>

int globalVariable = 10;

void function1();

int main() {
    int localVariable = 5;

    printf("Global variable: %d\n", globalVariable);
    printf("Local variable: %d\n", localVariable);

    function1();

    printf("Global variable: %d\n", globalVariable);
    printf("Local variable: %d\n", localVariable);

    return 0;
}

void function1() {
    globalVariable = 20;
    int localVariable = 15;

    printf("Global variable inside function: %d\n", globalVariable);
    printf("Local variable inside function: %d\n", localVariable);
}
/*
Global variable: 10
Local variable: 5
Global variable inside function: 20
Local variable inside function: 15
Global variable: 20
Local variable: 5

Process returned 0 (0x0)   execution time : 0.040 s
Press any key to continue.
*/
