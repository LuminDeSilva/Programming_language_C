#include<stdio.h>

//Function declaration
int addNumbers(int num1,int num2);

int main()
{
    int result = addNumbers(5,7);
    printf("Result : %i",result);

    return 0;
}

//Function definition
int addNumbers(int num1,int num2)
{
    return num1+num2;
}
/*
Result : 12
Process returned 0 (0x0)   execution time : 0.027 s
Press any key to continue.
*/
