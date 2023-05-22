#include<stdio.h>
#include<math.h>
int main(){
    int num,store,newNum=0,digit;
    printf("Enter a number: ");
    scanf("%d",&num);
    store = num;
    while (num != 0)
    {
        digit = num%10;
        newNum += pow(digit,3);
        num /= 10;
    }
    if (newNum == store)
    {
        printf("%d is an armstrong number.",store);
    }
    return 0;
}