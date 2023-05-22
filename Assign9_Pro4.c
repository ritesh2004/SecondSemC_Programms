#include<stdio.h>

int copyArr(int *src, int *dest, int n){
    int j=n-1;
    for (int i = 0; i < n; i++)
    {
        *(dest + i) = *(src + j);
        j--;
    }
    return 0;
}

int main(){
    int source[100],des[100],len;
    printf("Enter the length of tha array: ");
    scanf("%d",&len);
    printf("Enter the elements: ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&source[i]);
    }
    copyArr(source,des,len);
    printf("Copied array: ");
    for (int i = 0; i < len; i++)
    {
        printf(" %d ",des[i]);
    }
    return 0;
}