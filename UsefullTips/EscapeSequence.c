#include <stdio.h>
int main()
{
    printf("hello\a world\n"); //Alarm or Beep
    printf("hello\b world\n"); //Backspace
    printf("hello\f world\n"); //Form Feed
    printf("hello world\n"); //New Line
    printf("hello\r world\n"); //Carriage Return
    printf("hello\t world\n"); //Tab(Horizontal)
    printf("hello\v world\n"); //Vertical Tab
    printf("hello\\ world\n"); //Backslash
    printf("hello\' world\n"); //Single Quote
    printf("hello\" world\n"); //Double Quote
    printf("hello\? world\n"); //Question Mark
    // printf("hello \nnn world"); //Octal Number
    // printf("hello \xhh world"); //Hexadecimal Number
    // printf("hello \0 world"); //Null
    return 0;
}