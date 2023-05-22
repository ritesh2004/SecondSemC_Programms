#include<stdio.h>
int Swap(int *ptr1, int *ptr2){
    int temp;
    temp = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = temp;
    return 0;
}
int main(){
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    Swap(&a,&b);
    printf("After swapping value of a is %d and b is %d",a,b);
    return 0;
}