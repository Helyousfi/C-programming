#include <stdio.h>

int main()
{
    int a = 0;
    int m[3] = {1, 2, 3};
    int t[3] = {1, 2, 3};
    t = m;
    const int* p = &a;
    *p = 6; // Not allowed!
    *(p++) = 6; // Not allowed!
    p++; // allowed
    p+3; // allowed
    return 0;
}