#include<stdio.h>
int main(){
    int num1,num2,gcd,max,lcm;
    printf("Enter two numbers: ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    for (int i = 1; i<=num1 && i<=num2; i++)
    {
        if ((num1%i == 0) && (num2%i == 0))
        {
            gcd = i;
        }
        
    }
    max = num1 > num2 ? num1 : num2;
    while (1)
    {
        if ((max%num1 == 0)&&(max%num2 == 0))
        {
            lcm = max;
            break;
        }
        ++max;
    }
    printf("GCD is %d \n LCM is %d",gcd,lcm);
    return 0;
}