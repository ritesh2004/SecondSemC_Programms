#include<stdio.h>
int M[10][10],N[10][10],S[10][10];
int Sum(int r, int c){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            S[i][j] =  M[i][j] + N[i][j]; 
        }
        
    }
    
}
int main(){
    int row,col;
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
    Sum(row,col);
    printf("Addition of two matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" %d ",S[i][j]);
        }
        printf("\n");
    }
    return 0;
}