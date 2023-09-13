//WAP to calculate the third angle when two angles are input through the keyboard. 

#include<stdio.h>
int main(){
    int a,b,c;
    printf("\nEnter the values:");
    scanf("%d%d",&a,&b);
    c=180-(a+b);
    printf("\nThird angle is:%d",c);

}