#include <stdio.h>
int main()
{
    int a, b;
    a = 2;
    b = 3;
    printf("a & b = %d\n", a & b); //AND Operator
    printf("a | b = %d\n", a | b); //OR 
    printf("a ^ b = %d\n", a ^ b); //XOR Operator(Exclusively OR)
    printf("  ~ b = %d\n", ~b); //Complement Operator
    printf("a << b = %d\n", a << b); //Left Shift Operator
    printf("a >> b = %d\n", a >> b); //Right Shift Operator
    return 0;
}