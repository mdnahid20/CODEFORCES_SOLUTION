#include<iostream>
#include<cstdio>
#include<map>
#define ll long long
using namespace std;

map<ll,ll>m;
map<ll,ll>::iterator it;
ll a[200001],n,i;


int main ()
{
    scanf("%lld",&n);
    for(i=1; i<=n; ++i)
    {
        scanf("%lld",&a[i]);
    }
    for(i=1; i<=n; ++i)
    {
        if(m[a[i]-i])
        {
            m[a[i]-i] += a[i];
        }
        else
            m[a[i]-i] = a[i];
    }
    ll k=0;
    for(it=m.begin(); it!=m.end(); ++it)
    {
        ll p = it->second;
        if(p>k)
            k=p;

    }
    printf("%lld\n",k);

}
