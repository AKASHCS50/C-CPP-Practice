// O(2^n)

#include<stdio.h>

long long int fib(long long int);

int main()
{
    long long int n, f;


    printf("Enter the number ");
    scanf("%lld", &n);

    

    f = fib(n);
    printf("The fibonacci number is %lld\n", f);

    return 0;
}

long long int fib(long long int n)
{
    long long int f;

    if(n <= 1)
        return 1;
    
    return fib(n-1)+ fib(n-2);
    
}