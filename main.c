#include "array_stack.h"
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    array_stack *stk = arr_stk_create(10);
    for(int i = 1; i <= 100; ++i)
    {
        arr_stk_push(&stk, i);
    }
    for(int i = 0; i < 10; ++i)
        arr_stk_pop(stk);
    arr_stk_print(stk);
    printf("Peek = %15.8f\n", arr_stk_peek(stk));
    arr_stk_destroy(&stk);
    return 0;
}
