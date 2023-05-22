#include<stdio.h>
int main(){
    int arr[100],len,id;
    char choice;
    printf("Enter the length of the array: ");
    scanf("%d",&len);
    printf("Enter the elements: \n");
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("Delete(D) or Insert(I): ");
    scanf("%c",&choice);
    if (choice == "D")
    {
        printf("Enter Index no: ");
        scanf("%d",&id);
        arr[id] = arr[id+1];
    }
    printf("After modification: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}