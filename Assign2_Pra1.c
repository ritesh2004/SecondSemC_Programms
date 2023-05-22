#include<stdio.h>
int main(){
    int units;
    float bill;
    printf("Enter units: ");
    scanf("%d",&units);
    switch (units/200)
    {
    case 0:
        bill = 0.5* (float)units;
        break;
    case 1:
        bill = 100 + 0.65*(float)(units-200);
        break;
    case 2:
        bill = 250 + 0.80*(float)(units-400);
        break;
    default:
        bill = 425 + 1.25*(float)(units-600);
        break;
    }
    printf("Total amount of bill user has to pay: %0.2f",bill);
    return 0;
}