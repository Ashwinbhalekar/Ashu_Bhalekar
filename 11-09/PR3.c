//W A P to calculate SI
#include<stdio.h>
int main(){
    int a, b, c,si;
    printf("\nEnter the value:");
    scanf("%d\n%d\n%d",&a,&b,&c);
    
    si= (a*b*c)/100;
    printf("\nSimple intrest is:%d",si);

    return 0;
}
