#include <stdio.h>
int main()
{
    float a = 8.3;
    printf("%f\n",a);
    printf("%.4f\n",a);
    printf("%2.3f\n",a);
    printf("%9.5f\n",a);
    //9 is total space of number and 5 is accuracy of decimal points.
    printf("%-18.5f hello\n",a);
    // if we use space in minus like -18 it will leave space at the end.
    return 0;
}
/* 
%c - character
%d - integer
%f - float
%l - long
%lf - double
%LF - long double
*/