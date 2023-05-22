#include<stdio.h>
float fact(float num){
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num*fact(num-1);
    }  
}


int main(){
    int n,r;
    float num,factorial,com;
    printf("Enter the value for finding factorial: ");
    scanf("%f",&num);
    factorial = fact(num);
    printf("Factorial of %.0f is %.0f",num,factorial);
    printf("\nEnter the value of n and r respectively: ");
    scanf("%d %d",&n,&r);
    if (r>n)
    {
        printf("Math Error");
    }
    else
    {
        com = fact(n)/(fact(r)*fact(n-r));
        printf("%dC%d is : %.0f",n,r,com);
    }
    return 0;
}