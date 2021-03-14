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
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)

using namespace std;

int main ()
{
    ll t,n,i,c(0);
    ll k,j,maxi(0);
    scl(n);
    ll a[n];
    fornt(i,0,n)
    {
        scl(a[i]);
    }
    sort(a,a+n);
    scl(t);
    ll b[t];
    fornt(i,0,t)
    scl(b[i]);
    fornt(i,0,t)
    {
        c = upper_bound(a,a+n,b[i])-a;
        prl(c);
    }
}
