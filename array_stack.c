#include "array_stack.h"

array_stack *arr_stk_create(int capacity)
{
    array_stack *stk = (array_stack*)malloc(sizeof(array_stack));
    stk->data = (double*)malloc(capacity *(sizeof(double)));
    stk->capacity = capacity;
    stk->pos = 0;
    return stk;
}

void arr_stk_destroy(array_stack **stk)
{
    free((*stk)->data);
    free(*stk);
    *stk = NULL;
}

void arr_stk_push(array_stack **stk, double val)
{
    if((*stk)->pos == (*stk)->capacity)
    {
        double *new_data = malloc(2 * (*stk)->capacity * sizeof(double));
        for(int i = 0; i < (*stk)->pos; ++i)
            new_data[i] = (*stk)->data[i];
        free((*stk)->data);
        (*stk)->data = new_data;
        (*stk)->capacity *= 2;
        printf("\nstack array was resized\n");

    }
    (*stk)->data[(*stk)->pos] = val;
    (*stk)->pos += 1;
}

double arr_stk_peek(const array_stack *stk)
{
    return stk->pos > 0 ? stk->data[stk->pos - 1] : 0.f;
}

double arr_stk_pop(array_stack *stk)
{
    return stk->pos > 0 ? stk->data[stk->pos--] : 0.f;
}

double arr_stk_is_empty(array_stack *stk)
{
    return stk->pos == 0;
}

void arr_stk_print(const array_stack *stk)
{
    printf("\n*****Stack****\n");
    for(int i = 0; i < stk->pos; ++i)
    {
        printf("%15.8f\n", stk->data[i]);
    }
    printf("\n-------------------\n");
    printf("\nSize = %d\n", stk->pos);
    printf("\nCapacity = %d\n", stk->capacity);
}

int arr_stk_get_size(array_stack *stk)
{
    return stk->pos;
}
