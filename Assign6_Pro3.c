#include<stdio.h>
int main(){
    int A[10][10],row,col,T[10][10];
    printf("Enter the number of row and column respectively: ");
    scanf("%d %d",&row,&col);
    printf("Enter the elements: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    // TRANSPOSE
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            T[i][j] = A[j][i];
        }
    }
    // PRINTING
    printf("Transpose of matrix is: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" %d ",T[i][j]);
        }
        printf("\n");
    }
    return 0;
}