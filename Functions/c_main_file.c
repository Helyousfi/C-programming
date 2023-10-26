#include <stdio.h>

int main()
{
    void my_function(int a);
    my_function(4);

    int a = 5;
    int *adr = &a;
    int b = adr;

    printf("%x", adr);
    return 0;
}