#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#define fornt(i,j,n) for(i=j; i<n; ++i)
#define forntr(i,j,n) for(i=j; i>=n; --i)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)
#define pry() printf("YES\n")
#define prno() printf("NO\n")
#define MI 1000000009
using namespace std;

bool solve()
{
    int n,c(0),i;
    ll sum(0);
    sc(n);
    int a[n];
    fornt(i,0,n)
    {
        sc(a[i]);
        sum+=a[i];
        if(sum<=0)
            c=1;
    }
    if(c)
        return 0;
    sum=0;
    forntr(i,n-1,0)
    {
        sum += a[i];
        if(sum<=0)
            return 0;
    }
    return 1;
}
int main ()
{
    int t;
    sc(t);
    while(t--)
    {
         if(solve()) pry();
        else prno();
    }
}



