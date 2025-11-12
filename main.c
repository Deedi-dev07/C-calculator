#include <stdio.h>

int main()
{

    char input[100];
    char x;
    int size = 0;
    int i = 0;

    while (1)
    {
        x = getchar();
        if (x == '\n') // detecte la fin de la saisie
        {
            break;
        }
        else if (x == ' ') // skip les espaces
        {
            continue;
        }

        input[i] = x;
        input[i + 1] = '\0';
        i++;
        size++;
    }

    for (int j = 0; j < size; j++)
    {
        printf("%c", input[j]);
    }

    printf("\n");

    return 0;
}