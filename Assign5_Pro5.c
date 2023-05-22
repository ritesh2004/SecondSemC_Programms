#include<stdio.h>
int main(){
    int arr[50],len,s,id=0;
    printf("Enter the length of the array: ");
    scanf("%d",&len);
    printf("Enter the elements: \n");
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Search: ");
    scanf("%d",&s);
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == s)
        {
            printf("Search element found at index %d",i);
            id = 1;
            break;
        }
    }
    (id == 0) ? printf("Element not found.") : "NA";
    return 0;
}