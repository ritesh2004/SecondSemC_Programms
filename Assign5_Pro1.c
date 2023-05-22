#include<stdio.h>
int main(){
    int arr[100],len,sum=0;
    printf("Enter the length of the array: ");
    scanf("%d",&len);
    printf("Enter the elements: \n");
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    printf("Sum of the array elements: %d",sum);
    return 0;
}