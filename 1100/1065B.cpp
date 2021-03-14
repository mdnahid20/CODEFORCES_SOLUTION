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

int main ()
{
    ll n,m;
    ll p,k;
    scl2(n,m);
    if(n<1)
    {
        printf("0 0\n");
        return 0;
    }
    if(m<1)
    {
        printf("%lld %lld\n",n,n);
        return 0;
    }
    ll mn = max(0ll,n-(m*2));
    fornt(1,n+1)
    {
        k = i-1;
        p = (k*(k+1))/2;
        if(p>=m)
        {
            printf("%lld %lld\n",mn,n-i);
            return 0;
        }
    }

    printf("%lld 0\n",mn);
}


