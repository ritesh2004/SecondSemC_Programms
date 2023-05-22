#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int roll;
    int age;
    int marks;
    char address[100];
}st;

int main(){
    strcpy(st.name,"Ritesh");
    st.roll = 131;
    st.age = 19;
    st.marks = 462;
    strcpy(st.address, "Debipur");
    printf("Name: %s",st.name);
    printf("\nRoll: %d",st.roll);
    printf("\nAge: %d",st.age);
    printf("\nMarks: %d",st.marks);
    printf("\nAddress: %s",st.address);
    return 0;
}