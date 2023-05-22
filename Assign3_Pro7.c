#include<stdio.h>
int main(){
    int range,id=0;
    printf("Enter the range: ");
    scanf("%d",&range);
    for (int i = 2; i <= range; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
                id = 0;
                break;
            }
            else
            {
                id = 1;
            }
        }
        if (id == 1)
        {
            printf("%d\t",i);
        }
        
    }
    return 0;
}