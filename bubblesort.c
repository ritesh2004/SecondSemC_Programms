#include<stdio.h>
int main()
{
    int a[100],n,b;
    printf("Enter the number of the element: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < (n-1); i++)
    {
        for (int j = 0; j < (n-1-i); j++)
        {
            if (a[j]>a[j+1])
            {
                b = a[j];
                a[j] = a[j+1];
                a[j+1] = b;
            }
            
        }
        
    }
    printf("Arranged Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n",a[i]);
    }
    return 0;
}