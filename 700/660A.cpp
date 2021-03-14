#include<iostream>
#include<cstdio>
#include<vector>
#define ll long long
using namespace std;

int gcd(ll a,ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main ()
{
    ll n,i,c(0);
    ll a[1007];
    vector<ll>v;
    scanf("%lld",&n);
    for(i=0; i<n; ++i)
    {
        scanf("%lld",&a[i]);
    }
    for(i=1; i<n; ++i)
    {
        ll p=gcd(a[i-1],a[i]);
        v.push_back(a[i-1]);
        if(p!=1)
        {
            v.push_back(1);
            ++c;
        }
    }
    v.push_back(a[n-1]);
    ll p=v.size();
    cout<<c<<endl;
    for(i=0; i<p; ++i)
    {
        cout<<v[i]<<' ';
    }
}
