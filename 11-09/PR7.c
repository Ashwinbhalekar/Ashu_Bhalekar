//+ - * / mod two variable

#include<stdio.h>
int main(){
    int a,b,c;
    printf("\nEnter the values:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nAdd:%d",c);
    c=a-b;
    printf("\nsub:%d",c);
    c=a*b;
    printf("\nmulti:%d",c);
    c=a/b;
    printf("\ndiv:%d",c);
    c=a%b;
    printf("\nmod:%d",c);

}