#include<iostream>
#include<cstdio>
using namespace std;
typedef long long ll;

int main ()
{
    ll n,i;
    ll a,b,k;
    scanf("%lld", &n);
    for(i=0; i<n; ++i)
    { ll sum = 0;
        scanf("%lld %lld %lld", &a, &b, &k);
        sum = (a*(k-(k/2))) - (b*(k/2));
        printf("%lld\n", sum);
    }
}
