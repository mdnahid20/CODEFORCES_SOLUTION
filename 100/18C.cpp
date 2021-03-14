#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;

int main ()
{
    ll n;
    scanf("%lld",&n);
    ll i,a[n],sum(0);
    for(i=0; i<n; ++i)
    {
        scanf("%lld",&a[i]);
        sum += a[i];
    }
    ll k(0),c(0),mid;
    if(!(sum%2))
    {
        mid = sum/2;
        for(i=0; i<n-1; ++i)
        {
            k += a[i];
            if(k==mid)
                ++c;
        }printf("%lld\n",c);
    }
    else
        printf("0\n");
}
