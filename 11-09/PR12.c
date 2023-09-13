// calculate the sum of individual digit of a 4 digit number(using loop)

#include <stdio.h>
int main()
{
    int sum = 0, n, a;
    printf("\nEnter the number:");
    scanf("%d",&n);

    while (n!=0)
    {
        a = n % 10; 
        sum = sum + a;
        n = n / 10;
    }
    printf("\nSum of digit of number:%d", sum);
}