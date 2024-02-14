#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    char name[10] = "John Doe";

    printf("Numbers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("Name: %s\n", name);

    return 0;
}
/*
Numbers: 1 2 3 4 5
Name: John Doe

Process returned 0 (0x0)   execution time : 0.032 s
Press any key to continue.
*/
