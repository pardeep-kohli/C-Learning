#include <stdio.h>
int main()
{
    const int b = 4;
    /*if we add "const" before any variable then we can't change value further,
    like we declare 
    const int b = 4;
    b= 7;
    then b =7 isn't acceptable and we will get error because we declared b as a constant
    who can't change.*/
    printf("%d\n",b);
    return 0;
}