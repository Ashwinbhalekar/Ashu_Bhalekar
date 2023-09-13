//Compute Quotient and Remainder

#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("\nenter the value:");
    scanf("%d%d",&c,&d);
    a=c/d;
    printf("\nQuotient is:%d",a);
    b=c%d;
    printf("\nRemainder is:%d",b);
}