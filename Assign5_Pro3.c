#include<stdio.h>
int main(){
    int arr[100],len,c;
    printf("Enter the length of the array: ");
    scanf("%d",&len);
    printf("Enter elements: \n");
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < (len-1); i++)
    {
        for (int j = 0; j < (len-1-i); j++)
        {
            if (arr[j]>arr[j+1])
            {
                c = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = c;
            }
            
        }
        
    }
    printf("After rearrnge: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}