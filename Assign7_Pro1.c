#include<stdio.h>
int main(){
    char str[100];
    int len=0;
    printf("Enter string: ");
    gets(str);
    while (str[len] != '\0')
    {
        len++;
    }
    printf("Length of the string is %d",len);
    return 0;
}