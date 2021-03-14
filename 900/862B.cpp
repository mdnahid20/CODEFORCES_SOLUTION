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
vector<int>v[100005];
ll cnt[2]={0};
void dfs(int k,int node,int colour)
{
    cnt[colour]++;
    fornt(0,v[k].size())
    {
        if(v[k][i]!=node)
            dfs(v[k][i],k,!colour);
    }
}
int main ()
{
    int n,x;
    int k,y,c(0);
    sc(n);
    fornt(0,n-1)
    {
        sc2(x,y);
        v[x].pb(y);
        v[y].pb(x);
    }
    dfs(1,0,0);
    ll ans = cnt[0]*cnt[1]-n+1;
    prl(ans);
}
