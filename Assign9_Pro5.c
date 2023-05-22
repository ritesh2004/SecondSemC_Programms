#include<stdio.h>
int addMatrix(int *M, int *N, int *A, int rows, int cols){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            *(A + i *cols + j) = *(M + i *cols + j) + *(N + i *cols + j);
        }
        
    }
    return 0;
}
int main(){
    int M[10][10],N[10][10],A[10][10],row,col;
    printf("Enter number of rows and columns respectively: ");
    scanf("%d %d",&row,&col);
    printf("Enter elements of M matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&M[i][j]);
        }
    }
    printf("Enter elements of N matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&N[i][j]);
        }
    }
    addMatrix(&M[0][0],&N[0][0],&A[0][0],row,col);
    printf("Result is \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" %d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}