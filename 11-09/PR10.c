//calculate the total and avg of five subject

#include<stdio.h>
int main(){
    int a,b,c,d,e,t,avg;
    printf("\nEnter the marks:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    t=a+b+c+d+e;
    printf("\nTotal marks are:%d",t);
    avg=t/5;
    printf("\nAvg of subjects:%d",avg);
}