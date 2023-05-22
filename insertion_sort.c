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

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[j+1]<a[j])
            {
                b = a[j];
                a[j] = a[j+1];
                a[j+1] = b;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",a[i]);
    }
    return 0;
}