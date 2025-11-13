#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define OP_ADD 1
#define OP_SUB 2
#define OP_MUL 3
#define OP_DIV 4
#define OP_POW 5

typedef struct
{
    int size;          // current number of elements in stack
    unsigned capacity; // maximum number of elements stack can hold
    int *array;        // array to hold stack elements
} Stack;

Stack *create_stack(int capacity)
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->size = 0;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}

void push(Stack *stack, int item)
{
    stack->array[stack->size++] = item;
}

void pop(Stack *stack)
{
    if (stack->size == 0)
        return;
    stack->size--;
}

void clear_stack(Stack *stack)
{
    stack->size = 0;
}

bool check_if_operator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
    {
        return true;
    }
    return 0;
}

int main()
{
    char *input = NULL;
    int size = 1;
    input = (char *)malloc(size * sizeof(char));

    if (input == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    input[0] = '\0';

    printf("Enter the equation: ");

    int a = 0;

    while (1)
    {

        char x = getchar();
        if (x == '\n')
        {
            break;
        }
        else if (x == ' ')
        {
            continue;
        }

        input[a] = x;
        a++;
        size++;
        input = (char *)realloc(input, size * sizeof(char));
        input[a] = '\0';
    }

    for (int j = 0; j < a; j++)
    {
    }

    /*for (int j = 0; j < i; j++)
    {
        printf("%c", input[j]);
    }
    printf("\n");*/

    return 0;
}