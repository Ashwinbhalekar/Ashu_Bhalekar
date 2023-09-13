//calculate the surface of the cylinder

#include<stdio.h>
int main(){
    float pi=3.14, r, h,c;
    printf("\nEnter the values:");
    scanf("%f%f",&r,&h);
    c= 2*pi*r*h;
    printf("\nThe surface of cylinder is:%f",c);

}