#include<stdio.h>
int main(){
    char str[100];
    int d=0,s=0,a=0,i=0;
    printf("Enter a string: ");
    gets(str);
    while (str[i]!='\0')
    {
        if ((((int)str[i]>=65)&&((int)str[i]<=90))||(((int)str[i]>=97)&&((int)str[i]<=122)))
        {
            a++;
        }
        else if (((int)str[i]>=48)&&((int)str[i]<=57))
        {
            d++;
        }
        else
        {
            s++;
        }
        i++;
        
    }
    printf("Number of alphabet: %d, Special Character: %d, Digit: %d",a,s,d);
    return 0;
    
}