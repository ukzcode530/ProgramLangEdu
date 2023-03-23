#include <stdio.h>
int main()
{
    int arrayA[2][4] = { {1, 2, 3, 4}, {5,6,7, 8} };

    int i = 0;
    int j = 0;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", arrayA[i][j]);
        }
        printf("\n");
    }

    int arrayB[4][2];
    int k = 0;
    int l = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            k = j;
            l = i;
            arrayB[k][l] = arrayA[i][j];
        }
    }

    for (k = 0; k < 4; k++)
    {
        for (l = 0; l < 2; l++)
        {
            printf("%d ", arrayB[k][l]);
        }
        printf("\n");
    }

    return 0;
}