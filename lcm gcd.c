
#include<stdio.h>
int gcd(int m,int n);
main()
{
    int m,n,g,lcm;
    printf("Enter the two numbers");
    scanf("%d%d",&m,&n);
    g=gcd(m,n);
    lcm=(m*n)/g;
    printf("The GCD and LCM of the two numbers is %d and %d",g,lcm);

}
int gcd(int m,int n)
{
    int t;
    while(n>0)
    {
        t=m%n;
        m=n;
        n=t;
    }
    return m;
}

