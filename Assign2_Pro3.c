#include<stdio.h>
int main(){
    int x,n;
    float y;
    printf("Enter the value of x and n respectively: ");
    scanf("%d %d",&x,&n);
    switch (n)
    {
    case 1 :
        y = 1 + x*x;
        break;
    
    case 2 :
        y = 1 + ((float)x/n);
        break;
    
    case 3 :
        y = 1 + 2*x;
        break;
    default:
        y = 1 + n*x;
        break;
    }
    printf("The value of Y is: %0.2f",y);
    return 0;
}