#include<stdio.h>

int main()
{
    int a, b, t, x, gcd;
    printf("Enter two positive integers:\n");
    scanf("%d %d",&a,&b);
    if(a==0)
        gcd = a;
    else
        if(b==0)
        gcd = b;
    else
    {
        while (b!=0){
            t=b;
            b=a%b;
            a=t;
        }
        gcd = a;
    }
    printf("GCD is %d\n",gcd);
    printf("With Recursion: %d\n",gcdR(a,b));
    return 0;
}
int gcdR(a,b)
{
    if(b!=0)
        return gcdR(b,a%b);
    else
        return a;
}
