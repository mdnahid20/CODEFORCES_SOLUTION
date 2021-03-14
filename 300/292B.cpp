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
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)
#define pry printf("YES\n")
#define prn printf("NO\n")
#define S 100010
typedef long long int ll;
using namespace std;

vector<ll> adj[S];
ll n,m;


int main()
{
    ll i,j,k;
    ll u,v;

    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    bool star=false;
    ll sum=0,sum2=0;
    for(i=1;i<=n;i++)
    {
        if(adj[i].size()==m)
            star=true;

        else if(adj[i].size()==1)
            sum++;

        else if(adj[i].size()==2)
            sum2++;
    }

    if(star)
    {
        cout<<"star topology";
        return 0;
    }

    if(sum==2 && sum2==n-2)
    {
        cout<<"bus topology";
        return 0;
    }

    if(sum2==n)
        cout<<"ring topology";

    else
        cout<<"unknown topology";

    return 0;
}
