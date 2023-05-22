#include<stdio.h>
int Power(int num, int exp){
    if (exp == 0)
    {
        return 1;
    }
    else
    {
        return num*Power(num,exp-1);
    }
}
int main(){
    int num,exp,result;
    printf("Enter number and power respectively: ");
    scanf("%d %d",&num,&exp);
    result = Power(num,exp);
    printf("The result is : %d",result);
    return 0;
}