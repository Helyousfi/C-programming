
#include<stdio.h>

int main()
{

    double (*adt) [3];
    double* adt2 [3];

    double t[3] = {1, 2, 3};

    adt = &t;
    printf("%f", t[1]);

    return 0;
}