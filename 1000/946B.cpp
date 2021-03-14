#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;


void check(ll a,ll b)
{
    if (a==0 || b==0)
    {
        printf("%lld %lld\n",a,b);
        return;
    }
    if(a>=2*b)
    a%=(2*b);
    else if(b>=2*a)
        b%=(2*a);
    else
    {
        printf("%lld %lld\n",a,b);
        return;
    }
    check(a,b);
}

int main ( )
{

    ll a,b;
    scanf("%lld %lld",&a,&b);
        check(a,b);
    return 0;
}
