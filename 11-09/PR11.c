//convert the temp

#include<stdio.h>
int main(){
    float f,c;
    printf("\nEnter the degree:");
    scanf("%f",&f);
    c=((f-32)/(1.8));
    printf("\nConverted degree in celsius is:%f",c);
}