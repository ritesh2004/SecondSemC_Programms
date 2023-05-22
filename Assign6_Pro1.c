#include<stdio.h>
int main(){
    int M[10][10],N[10][10],row,col,A[10][10];
    printf("Enter the number of row and column respectively: ");
    scanf("%d %d",&row,&col);
    printf("Enter the elements of M matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&M[i][j]);
        }
        
    }
    printf("Enter the elements of N matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&N[i][j]);
        }
        
    }
    // ADDITION
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            A[i][j] = M[i][j] + N[i][j];
        }
        
    }
    printf("Addition of two matrix is \n");
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