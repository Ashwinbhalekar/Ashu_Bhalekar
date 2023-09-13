//Input a four digit number from the keyboard. WAP to obtain sum of first and last digit of the number

#include<stdio.h>
int main(){
   int n=1234;
    int a, b, c, d, sum=0;
    a=n/1000;
    b=n/100%10;
    c=n/10%10;
    d=n%10;
    sum=a+d;
    printf("\nsum:%d",sum);
}
