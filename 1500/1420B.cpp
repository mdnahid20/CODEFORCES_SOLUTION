#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;


int main ()
{
    int t;
    sc(t);
    while(t--)
    {
        int n;
        sc(n);
        ll a[n+5];
        fornt(0,n)
        scl(a[i]);
        ll ans(0),c(0);
        fornt(0,30)
        {
            c=0;
            fornt2(0,n)
            {
                if(a[i2]>=(1<<i) && a[i2]<(1<<(i+1)))
                   ++c;
            }
            ans += (c*(c-1))/2;
        }
        prl(ans);
    }
}

