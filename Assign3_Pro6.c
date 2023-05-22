#include<stdio.h>
int main(){
    int num,id=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            printf("%d is not a prime number.",num);
            id = 0;
            break;
        }
        else
        {
            id=1;
        }
        
    }
    if (id == 1)
    {
        printf("%d is a prime number.",num);
    }
    return 0;
}