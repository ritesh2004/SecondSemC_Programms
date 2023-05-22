#include<stdio.h>
int main(){
    int row,stRow;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    stRow = row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = (stRow); j>=0; j--)
        {
            printf("\t");
        }
        for (int k = 0; k < i; k++)
        {
            printf("%d\t",i+k);
        }
        printf("\n");
        stRow--;
    }
    return 0;
}