/* Type your code here, or load an example. */
#include<stdio.h>
#include <stdbool.h>

/*
- The fields must be declared one after the other in the memory.
- The address of a structure is the address of its first element.
- 
*/

struct essaie {int x; float y;};
// Here, (void *)&x < (void *)&y


struct Point
{
    /* 
    - Can't define a static variable here
    - Constant & volatile variables are allowed
    */ 
    int x;
    int y;
};

int main()
{
    struct Point p = {1, 2};
    struct essaie es = {2, 1.1};

    bool x = true;
    x = ((void *)&es.x < (void *)&es.y);
    printf("%s", x? "true" : "false");
     
    struct Point* p2;
    scanf("%d", &(p2->x));
    scanf("%d", &(p2->y));

    printf("p2->x : %d \n", p2->x);
    printf("p2->y : %d \n", p2->y);
      
    return 0;
}