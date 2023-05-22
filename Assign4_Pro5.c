#include<stdio.h>
int fact(int num){
    if (num == 0)
    {
        return 1;
    }
    else if (num >= 1)
    {
        return (num*fact(num-1));
    }  
}
int main(){
    int row,stRow,digits;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    stRow = row;
    for (int i = 0; i <= row; i++)
    {
        for (int k = stRow; k > 0; k--)
        {
            printf("   ");
        }
        
        for (int j = 0; j <= i; j++)
        {
            digits = fact(i)/(fact(j)*fact(i-j));
           // printf("%d, %d",fact(j),fact(i));
            printf("%6d",digits);
        }
        printf("\n");
        stRow--;
    }
    return 0;
}