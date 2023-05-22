#include<stdio.h>
int Compare(int *ptr1, int *ptr2){
    if (*ptr1>*ptr2)
    {
        return *ptr1;
    }
    else if (*ptr1 == *ptr2)
    {
        return -10;
    }
    else
    {
        return *ptr2;
    }
    
}
int main(){
    int a,b,*ptr1,*ptr2;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if (Compare(&a,&b) == -10)
    {
        printf("Two given numbers are same.");
    }
    else
    {
        printf("%d is maximum number.",Compare(&a,&b));
    }
    
    return 0;
}