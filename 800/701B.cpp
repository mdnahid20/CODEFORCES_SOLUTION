#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
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

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,m,x,y;
    cin>>n>>m;
    set<ll> a;
    set<ll> b;
    while(m--)
    {
        cin>>x>>y;
        a.insert(x);
        b.insert(y);
        cout << ((n-a.size())*(n-b.size())) << " ";
    }
}
