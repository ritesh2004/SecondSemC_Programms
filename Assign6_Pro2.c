#include <stdio.h>
int main()
{
    int M[10][10], N[10][10], mul[10][10], Mrow, Mcol, Nrow, Ncol, sum;
    printf("Enter row and column respectively of M matrix: ");
    scanf("%d %d", &Mrow, &Mcol);
    printf("Enter elements of M matrix: \n");
    for (int i = 0; i < Mrow; i++)
    {
        for (int j = 0; j < Mcol; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    printf("Enter row and column respectively of N matrix: ");
    scanf("%d %d", &Nrow, &Ncol);
    printf("Enter elements of N matrix: \n");
    if (Mcol != Nrow)
    {
        printf("Matrix multiplication is not possible.");
    }
    else
    {
        for (int i = 0; i < Nrow; i++)
        {
            for (int j = 0; j < Ncol; j++)
            {
                scanf("%d", &N[i][j]);
            }
        }
    }
    // MULTIPLICATION
    for (int i = 0; i < Mrow; i++)
    {
        for (int j = 0; j < Ncol; j++)
        {
            sum = 0;
            for (int k = 0; k < Mcol; k++)
            {
                sum += M[i][k]*N[k][j];
            }
            mul[i][j] = sum;
        }
        
    }
    
    printf("After multiplication: \n");
    for (int i = 0; i < Mrow; i++)
    {
        for (int j = 0; j < Ncol; j++)
        {
            printf(" %d ", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}