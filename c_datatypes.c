#include <stdio.h>
#include <limits.h>

int main()
{
    // Integer Type 
    /*
    unsigned short (-32767 -> 32767) / signed short (0 -> 65535)
    unsigned long / signed long
    */
    unsigned short a;
    printf("%d \n", sizeof(a));

    int b = 0xFF;
    printf("%d \n", b + 10);

    printf("%d \n", CHAR_MAX);
    printf("%d", CHAR_BIT);
    return 0; 
}