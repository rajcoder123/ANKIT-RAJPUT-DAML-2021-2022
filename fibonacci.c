#include<stdio.h>
int fib(int n);
void main()
{
    int n=2,z,i;
    for(i=1;i<n;i++)
    {z=fib(i);
    printf("%d",z);
    }
}
int fib(int n)
{
    if (n==1)
        return(0);
    else if(n==2)
        return(1);
    else
        return(fib(n-1)+fib(n-2));
}

