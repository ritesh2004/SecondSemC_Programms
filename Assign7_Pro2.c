#include<stdio.h>
int main(){
    char str[100];
    int v=0,c=0,i=0;
    printf("Enter the string: ");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            v++;
        }
        else
        {
            c++;
        }
        i++;
    }
    printf("Number of vowel is %d and consonant is %d",v,c);
    return 0;
}