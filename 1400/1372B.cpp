#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;

bool isPrime(ll n)
{
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
void primeFactors(ll n)
{
    ll t=n;
    ll maxs=1000000009;
    for(ll i=3; i*i<=n; i+=2)
    {
        while(n%i==0)
        {
            if(maxs>i)
            {
                maxs=i;
            }
            n/=i;
        }
    }
    if(n>2)
        maxs=min(maxs,n);
    printf("%lld %lld\n",t/maxs,t-t/maxs);
}
int main ()
{
    ll t,n,i;
    ll a,b,c(0);
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n%2==0)
        {
            printf("%lld %lld\n",n/2,n/2);
        }
        else
        {
            if(isPrime(n))
            {
                printf("1 %lld\n",n-1);
            }
            else
            {
                primeFactors(n);
            }
        }
    }
}
