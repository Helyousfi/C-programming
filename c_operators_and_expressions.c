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

    printf("Les Conversion Numériques : \n");
    // if we add two shorts then they will be converted to int

    {
        printf("Bloc :");
        int d = 0;
    }
    // printf("%d", d); Can't do this
    for(int i=0; i<20; i++)
    {
        static int static_var = 0;
        static_var++;
        printf("%d \n", static_var);
    }
    goto suite;
    for(int i=0; i<20; i++)
    {
        int aa = i*2;
        printf("%d", aa);
        suite:
            printf("ok \n");
    }
    
    return 0;
}