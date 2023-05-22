#include<stdio.h>
int main(){
    char str1[100],str2[100];
    int j,len=0,i=0;
    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);
    while (str1[len] != '\0')
    {
        len++;
    }
    j = len;
    while (str2[i] != '\0')
    {
        str1[j+i] = str2[i];
        i++;
    }
    str1[j+i] = '\0';
    printf("Concatenated string is: %s",str1);
    return 0;
}