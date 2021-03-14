#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string.h>
#define fornt(i,j,n) for(i=j; i<n; ++i)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)
#define MAXI 1000000000
using namespace std;

int main ()
{
    int t,i,n;
    sc(t);
    while(t--)
    {
        sc(n);
        ll org[n],cand[n];
        ll a=MAXI,b=MAXI;
        fornt(i,0,n)
        {
            scl(org[i]);
            a = min(a,org[i]);
        }
        fornt(i,0,n)
        {
            scl(cand[i]);
            b = min(b,cand[i]);
        }
        ll ans(0);
        fornt(i,0,n)
        {
            ans += max(org[i]-a,cand[i]-b);
        }
        prl(ans);

    }
}
