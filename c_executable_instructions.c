#include <stdio.h>

int main()
{
    // inside switch can't be a float
    int a = 1;
    switch (a)
    {
    case 1:
        printf("Ok");
        break;
    }

    goto suite_programme;
    printf("Step 1 \n");

    suite_programme:
        printf("Step2");

    struct 
    {
        int x;
        static int y;
    } myStruct;

    printf("%d \n", myStruct.y);

    for(int k=0; k<3; k++)
    {
        static int i = 0;
        i++;
    }

    return 0;
}