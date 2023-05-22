#include<stdio.h>
int main(){
    int row,num=0;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            num += 1;
            printf("%d\t",num);
        }
        printf("\n");
    }
    return 0;
}