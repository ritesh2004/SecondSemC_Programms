#include<stdio.h>
int main(){
    char str[100],rev[100];
    int len=0,i=0,j=0;
    printf("Enter the string: ");
    gets(str);
    while (str[len]!='\0')
    {
        len++;
    }
    for ( i = len-1; i>=0; i--)
    {
        rev[j] = str[i];
        j++;
    }
    rev[len] = '\0';
    printf("The reversed string is: %s",rev);
    return 0;
}