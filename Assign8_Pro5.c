#include<stdio.h>

int GCD(int n, int m){
    if (m!=0)
    {
        return GCD(m,n%m);
    }
    else
    {
        return n;
    }
}
int GCDThree(int a, int b, int c){
    return (GCD(a,GCD(b,c)));
}
int main(){
    int n1,n2,n3,gcd,gcdThree;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    gcd = GCD(n1,n2);
    printf("GCD of %d and %d is %d",n1,n2,gcd);
    gcdThree = GCDThree(n1,n2,n3);
    printf("\nGCD of %d, %d and %d is %d",n1,n2,n3,gcdThree);
    return 0;
}