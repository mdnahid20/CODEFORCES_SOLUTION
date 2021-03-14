#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#define fornt(i,j,n) for(i=j; i<n; ++i)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
using namespace std;

int main ()
{
    ll n;
    scl(n);
    ll i,j;
    ll a[n],d(0);
    set<ll>sum;
    fornt(i,0,n)
    {
        scl(a[i]);
        d += a[i];
        sum.insert(d);
    }
    ll ans(0),k(0);
    for(i=n-1; i >= 0; --i)
    {
        sum.erase(d);
        d -= a[i];
        k += a[i];
        if(sum.count(k))
            ans = max(ans, k);
    }
    cout<<ans<<endl;
}
