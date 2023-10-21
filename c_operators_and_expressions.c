#include <stdio.h>
#include <limits.h>

int main()
{
    // Sum of two integers
    printf("%d \n", sizeof(short));
    printf("%d \n", SHRT_MAX); 
    printf("%ld \n", UINT_MAX);

    short a = 32000, b = 32000;
    short c = a + b;
    printf("%ld", c);
    printf("-----");

    float y = 1E-30;
    double x = y * y;
    printf("%f", x);

    return 0;
}