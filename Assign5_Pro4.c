#include<stdio.h>
int main(){
    int arr[100],len,b,minIndex;
    printf("Enter the length of the array: ");
    scanf("%d",&len);
    printf("Enter the elements: \n");
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < len-2; i++)
    {
        minIndex = i;
        for (int j = i+1; j < len; j++)
        {
            if (arr[minIndex]>arr[j])
            {
                minIndex = j;
            }
            
        }
        b = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = b;
    }
    printf("Arranged Array: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}