// calculate the sum of individual digit of a 4 digit number( without using loop)
 #include<stdio.h>
 int main(){
    int n=1234;
    int a, b, c, d, sum=0;
    a=n/1000;
    b=n/100%10;
    c=n/10%10;
    d=n%10;
    sum=a+b+c+d;
    printf("\nsum:%d",sum);


 }