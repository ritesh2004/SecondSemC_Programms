#include<stdio.h>

int A[100];

int Frequency(int n, int len){
    int count=0;
    for (int i = 0; i < len; i++)
    {
        if (A[i] == n)
        {
            count++;
        }
    }
    return count;
}

int main(){
    int len,result;
    printf("Enter the length of the array: ");
    scanf("%d",&len);
    printf("Enter the elements: ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&A[i]);
    }

    // CHECKING EACH ELEMENT
    for (int i = 0; i < len; i++)
    {
        result = Frequency(A[i],len);
        printf("%d found %d times\n",A[i],result);
    }
    return 0;
    
}