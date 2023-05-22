#include<stdio.h>
int Fibonacci(int n){
    int a=0,b=1,s;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
    
    
}
int main(){
    int len;
    printf("Enter the length of the series: ");
    scanf("%d",&len);
    for (int i = 0; i < len; i++)
    {
        printf(" %d ",Fibonacci(i));
    }
    return 0;
}