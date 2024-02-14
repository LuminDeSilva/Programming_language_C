#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Number is positive\n");
    } else if (num < 0) {
        printf("Number is negative\n");
    } else {
        printf("Number is zero\n");
    }

    switch (num) {
        case 1:
            printf("Number is 1\n");
            break;
        case 2:
            printf("Number is 2\n");
            break;
        default:
            printf("Number is neither 1 nor 2\n");
            break;
    }

    return 0;
}
/*
Enter a number: 5
Number is positive
Number is neither 1 nor 2

Process returned 0 (0x0)   execution time : 2.408 s
Press any key to continue.
*/
