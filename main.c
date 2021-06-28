#include <stdio.h>

long factorial(int n)
{
    if(n==0)
        return 1;
    else
        return (n*factorial(n-1));
}

int main()
{
    int num;
    long factorials;
    printf("Enter a number:");
    scanf("%d",&num);
    
    factorials=factorial(num);
    printf("\nfactor of %d is %ld",num,factorials);
    return 0;
}
