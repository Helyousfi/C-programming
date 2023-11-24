#include <stdio.h>
#define N 10

void pointer_increment()
{
    static int n = 0;
    static int *addr = &n;
    (*addr)++;
    printf("%d", (*addr));
}

int main()
{
    
    for(int i=0; i<10; i++){
        pointer_increment();
    }

    const int const_var = 5;
    // scanf("%d", &const_var);
    // printf("%d", const_var);
    printf("New Line \n");
    int a = 5;
    int b = a;
    printf("a address %p \n", &a);
    printf("b address %p \n", &b);
    int* ptr = (int*)0x0061FF08;
    printf("%d \n", *ptr);
    
    int * const p = &a;
    printf("%d", p);

    while(1) {};
    return 0;
}