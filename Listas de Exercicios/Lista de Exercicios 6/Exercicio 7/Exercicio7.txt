#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5  
#define COLS 5


int main ()

{
    srand(time(NULL));

    int M[ROWS][COLS];

    printf("Matriz sem alterações:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            M[i][j] = -10 + rand() % 21;
            printf(" %d\t",M[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    printf("Matriz inversa:\n");
    for (int i = 0; i < ROWS; i++)
    {
      for (int j = 0; j < COLS; j++)
      {
            if (M[i][j] > 0)
            {
                M[i][j] = M[i][j] * -1;
            }
            else if (M[i][j] < 0)
            {
                M[i][j] = -M[i][j];
            }
            printf(" %d\t",M[i][j]);
        }
      printf("\n");
    }         

    return 0;
}