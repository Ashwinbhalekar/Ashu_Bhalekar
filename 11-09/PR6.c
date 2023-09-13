//Swap 2 number without using 3rd variable

#include<stdio.h>
int main(){
    int a, b;
    printf("\nEnter the value:");
    scanf("%d%d",&a,&b);
    a= a+b;
    b= a-b;
    a= a-b;
    printf("\nAfter swap:%d %d",a,b);

}