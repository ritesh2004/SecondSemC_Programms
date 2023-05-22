#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int roll;
    int age;
    int marks;
    char address[100];
};

int main(){
    struct student st[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter details of student %d\n",(i+1));
        printf("Enter name: ");
        gets(st[i].name);
        printf("Enter roll no: ");
        scanf("%d",&st[i].roll);
        printf("Enter age: ");
        scanf("%d",&st[i].age);
        printf("Enter marks: ");
        scanf("%d",&st[i].marks);
        printf("Enter address: ");
        gets(st[i].address);
    }
    printf("Student details: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Name: %s",st[i].name);
        printf("\nRoll No: %d",st[i].roll);
        printf("\nAge: %d",st[i].age);
        printf("\nMarks: %d",st[i].marks);
        printf("\nAddress\n: %s",st[i].address);
        
    }
    
    return 0;
}