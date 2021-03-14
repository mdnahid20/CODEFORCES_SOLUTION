#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;

int main ()
{
    ll x,y,x1,y1;
    ll n, m;
    scanf("%lld %lld",&n,&m);
    x = n/5, y = m/5;
    x1 = n% 5, y1 = m% 5;
    ll ans = x*y*5;
    ans += x1*y + y1*x;
    if((x1 + y1)>=5)
        ans += (x1 + y1)/5 + (x1 + y1)%5;

       printf("%lld\n",ans);
    return 0;
}
