//Input a four digit number from the keyboard. WAP to reverse that number.

 #include<stdio.h>
 int main(){
    int n=1234;
    int a, b, c, d, rev;
    a=n/1000;
    b=n/100%10;
    c=n/10%10;
    d=n%10;
    rev=d*1000+c*100+b*10+a;
    printf("\nrev:%d",rev);


 }