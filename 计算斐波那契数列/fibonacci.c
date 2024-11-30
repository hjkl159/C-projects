#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long double Fibonacci(int);

int main(void)
{
    int n;
    printf("输入一个正整数(q to quit)");
    while (scanf("%d", &n) != 0)
        printf("斐波那契第%d位 = %llg\n输入一个正整数(q to quit)", n, Fibonacci(n));
    return 0;
}

long double Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    long double An, Am, Al; // Am是An-1 Al是An-2
    Am = 1;
    Al = 1;

    while (n > 2)
    {
        An = Am + Al;
        Al = Am;
        Am = An;
        
        n--;
    }

    return An;
}