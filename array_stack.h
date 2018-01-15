#ifndef SIMPLE_STACK_H
#define SIMPLE_STACK_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#define INITIAL_CAPACITY 20

typedef struct
{
    double *data;
    int pos;
    int capacity;
} array_stack;

array_stack *arr_stk_create(int capacity);
void arr_stk_destroy(array_stack **stk);
void arr_stk_push(array_stack **stk, double val);
double arr_stk_peek(const array_stack *stk);
double arr_stk_pop(array_stack *stk);
double arr_stk_is_empty(array_stack *stk);
int arr_stk_get_size(array_stack *stk);
void arr_stk_print(const array_stack *stk);

#endif // SIMPLE_STACK_H
