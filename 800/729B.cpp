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
    int n,m;
    sc2(n,m);
    int a[n+2][m+2];
    vector<int>v[n+2];
    fornt(1,n+1)
    {
        fornt2(1,m+1)
        {
            sc(a[i][j]);
            if(a[i][j])
            v[i].pb(j);
        }
    }
    int as(0),c(0);
    fornt(1,n+1)
    {
        c=1;
        fornt2(0,v[i].size())
        {
            int p = v[i][j];
            for(int k=p+1; k<=m; ++k)
            {
                if(a[i][k])
                    break;
                ++as;
            }
            for(int k=p-1; k>=1; --k)
            {
                if(a[i][k])
                    break;
                ++as;
            }
            for(int k=i+1; k<=n; ++k)
            {
                if(a[k][p])
                    break;
                ++as;
            }
            for(int k=i-1; k>=1; --k)
            {
                if(a[k][p])
                    break;
                ++as;
            }
        }
    }
    if(c)
        pr(as);
}

