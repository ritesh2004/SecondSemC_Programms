#include<stdio.h>
int main(){
    int num,newNum=0,store;
    printf("Enter a number: ");
    scanf("%d",&num);
    store = num;
    for (int i = 1; i < num; i++)
    {
        if (num%i == 0)
        {
            newNum += i;
        }
        
    }
    if (store == newNum)
    {
        printf("%d is a perfect number.",store);
    }
    return 0;
}