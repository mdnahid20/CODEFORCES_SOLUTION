#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int j=p; j<n; ++j)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)
#define pry printf("YES\n")
#define prn printf("NO\n")
using namespace std;
ll a[100005];
map<ll,ll>m2;
vector<ll>vp[100005];
ll circle(ll k)
{
    m2[k]=1;
    ll mn=a[k],r;
    for(ll l=0; l<vp[k].size(); ++l)
    {
        r = vp[k][l];
        if(!m2[r])
        {
          mn=min(mn,circle(vp[k][l]));
        }
    }
    return mn;
}

int main ()
{
    ll n,m;
    ll x,y;

    scl2(n,m);
    fornt(1,n+1)
    scl(a[i]);

    fornt(0,m)
    {
        scl2(x,y);
        vp[x].pb(y);
        vp[y].pb(x);
    }
    ll sum(0),k;
    fornt(1,n+1)
    {
        if(!m2[i])
        sum += circle(i);
    }
    prl(sum);
}

