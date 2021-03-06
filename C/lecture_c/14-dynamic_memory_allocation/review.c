#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **p = (int **)malloc(sizeof(int *) * 4);
    for (int i = 0; i < 4; i++)
        *(p + i) = (int *)malloc(sizeof(int) * 3);

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 3; j++)
            *(*(p + i) + j) = i * 3 + j; // *(*(p + i) + j) == p[i][j]

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%10d", *(*(p + i) + j));
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
        free(*(p + i));

    return 0;
}