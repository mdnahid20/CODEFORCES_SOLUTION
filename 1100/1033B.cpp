#include<iostream>
#include<cstdio>
typedef long long ll;
using namespace std;

bool isPrime(ll n)
{
    if (n == 2)
        return true;

    if (n%2==0 || n<2)
        return false;

    for (ll i=3; i*i<=n; i+=2)
        if (n % i == 0)
            return false;

    return true;
}
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll a,b,p(0);
        scanf("%lld %lld",&a,&b);
        p=a+b;
        ll k=a-b;
        if(isPrime(p) && k==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
