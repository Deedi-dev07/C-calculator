#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *input = NULL;
    int size = 10;
    input = (char *)malloc(size * sizeof(char));

    if (input == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    input[0] = '\0';

    printf("Enter the equation: ");

    int i = 0;

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

        input[i] = x;
        i++;
        size++;
        input = (char *)realloc(input, size * sizeof(char));
        input[i] = '\0';
    }

    for (int j = 0; j < i; j++)
    {
        printf("%c", input[j]);
    }
    printf("\n");

    return 0;
}