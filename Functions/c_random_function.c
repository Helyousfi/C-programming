#include <stdio.h>
extern void my_function(int a)
{
    printf("%d", a);
}

my_function2(int a)
{
    return a + 1;
}