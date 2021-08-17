#include <stdio.h>
int main()
{
    printf("\nSpace Consume in Ram\n");
    printf(" char               : %lu Bytes\n", sizeof(char));
    printf(" signed char        : %lu Bytes\n", sizeof(signed char));
    printf(" unsigned char      : %lu Bytes\n", sizeof(unsigned char));
    printf(" short              : %lu Bytes\n", sizeof(short));
    printf(" signed short       : %lu Bytes\n", sizeof(signed short));
    printf(" unsigned short     : %lu Bytes\n", sizeof(unsigned short));
    printf(" int                : %lu Bytes\n", sizeof(int));
    printf(" signed int         : %lu Bytes\n", sizeof(signed int));
    printf(" unsigned int       : %lu Bytes\n", sizeof(unsigned int));
    printf(" short int          : %lu Bytes\n", sizeof(short int));
    printf(" signed short int   : %lu Bytes\n", sizeof(signed short int));
    printf(" unsigned short int : %lu Bytes\n", sizeof(unsigned short int));
    printf(" long int           : %lu Bytes\n", sizeof(long int));
    printf(" signed long int    : %lu Bytes\n", sizeof(signed long int));
    printf(" unsigned long int  : %lu Bytes\n", sizeof(unsigned long int));
    printf(" float              : %lu Bytes\n", sizeof(float));
    printf(" double             : %lu Bytes\n", sizeof(double));
    printf(" long double        : %lu Bytes\n", sizeof(long double));
    return 0;
}