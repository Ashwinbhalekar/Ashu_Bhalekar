//Calculate the Gross and net salary

#include<stdio.h>
int main(){
    int da, hra, pf,ta,bs,gs,ns;
    printf("\nEnter the Basic salary:");
    scanf("%d",&bs);
    da= 0.40 * bs;
    hra= 0.25*bs;
    gs= bs+da+hra+ta;
    printf("\nGross salary is:%d",gs);
    pf=bs*0.2;
    ta=bs*0.3;
    ns=gs-pf;
    printf("\nNet salary is:%d",ns);


}