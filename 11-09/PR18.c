//WAP to calculate the perimeter of the rectangle.(2*(l+b))

#include<stdio.h>
int main(){
    int l,b,r;
    printf("\nEnter the value:");
    scanf("%d%d",&l,&b);
    r=(2*(l+b));
    printf("\nthe perimeter of the rectangle is:%d",r);
    return 0;
}