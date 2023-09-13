//swap the number using 3rd variable

#include<stdio.h>
int main(){
    double a,b,c;
    printf("\nenter the value :");
    scanf("%lf%lf",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("\nswap:%2lf %2lf",a,b);
}