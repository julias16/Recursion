// Write a recursive function for nth fibonacci number

#include<stdio.h>
int fib(int n)
{
    if(n<=1)
        return n;
    else
        return fib(n-1) + fib(n-2);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%dth Fibonacci number: %d", n, fib(n));
    return 0;
}
