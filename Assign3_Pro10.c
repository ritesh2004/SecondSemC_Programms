#include<stdio.h>
int main(){
    int num,store,newNum=0,digit,fact=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    store = num;
    while (num!=0)
    {
        digit = num%10;
        fact = 1;
        for (int i = 1; i <= digit; i++)
        {
            fact = fact*i;
        }
        newNum += fact;
        num /= 10;
    }
    if (newNum == store)
    {
        printf("%d is a strong number.",store);
    }
    return 0;
}
