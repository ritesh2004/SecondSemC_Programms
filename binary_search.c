#include<stdio.h>
int main()
{
    int a[100],n,b,s,h,l,mid;
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
    printf("Enter the searched element: ");
    scanf("%d",&s);
    l = 0;
    h = (n-1);
    while (l<=h)
    {
        mid = (l+h)/2;
        if (a[mid] == s)
        {
            printf("%d is found in the array. Index of %d is: %d",s,s,mid);
            break;
        }
        else if (a[mid]<s)
        {
            l = mid + 1;
        }
        else if (a[mid]>s)
        {
            h = mid - 1;
        }      
    }
    if (l>h)
    {
        printf("%d not found in the array.",s);
    }
    return 0;
}