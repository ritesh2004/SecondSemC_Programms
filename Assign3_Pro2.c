#include<stdio.h>
int main(){
    int num,store,digit,rev=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    store = num;
    for (int i = 0; num!=0 ; i++)
    {
        digit = num % 10;
        rev = rev*10 + digit;
        num /= 10;
    }
    if (rev == store)
    {
        printf("%d is a palindrome number.",store);
    }
    else
    {
        printf("%d is not a palindrome number.",store);
    }
    return 0;
}