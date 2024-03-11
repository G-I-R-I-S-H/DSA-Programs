#include<stdio.h>
int factorial(int n);
main()
{
    int n,r,npr,ncr;
    printf("Enter the numbers n and r\n");
    scanf("%d%d",&n,&r);
    npr=factorial(n)/factorial(n-r);
    ncr=npr/factorial(r);
    printf("npr=%d\nnpr=%d",npr,ncr);
}
int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
