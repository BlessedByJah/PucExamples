# include <stdio.h>
# include <stdlib.h>

int **create(int nrows, int ncols)
{
    int **matrix = malloc(nrows * sizeof(int*));

    for (int i = 0; i < nrows; i++)
    {
        matrix[i] = malloc(ncols * sizeof(int));
    }
    return matrix;
}

void delete( int **matrix, int nrows)
{
    for(int i = 0; i < nrows; i++)
    {
        free(matrix[i]);
    }
}

void print (int **matrix, int nrows, int ncols)
{
    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < ncols; i++)
            printf("%3i", matrix[i][j]);
        printf("\n");    

    }
}

void swapline(int **matrix, int source, int target)

{
     **matrix
}

int main () 
{

}