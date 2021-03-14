#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#define inf 1000000000000
typedef long long int ll;
using namespace std;

struct edge
{
    ll to,cost;
    edge(ll a,ll b)
    {
        to=a;cost=b;
    }
};


vector<edge> adj[100010];


int main()
{

    ll i,j,k;
    ll n,m;
    ll u,v,w;

    cin>>n>>m>>k;
    for(i=0;i<m;i++)
    {
        cin>>u>>v>>w;

        adj[u].push_back(edge(v,w));
        adj[v].push_back(edge(u,w));
    }

    if(k==0)
    {
        printf("-1");
        return 0;
    }

    map<ll,bool> mp;
    for(i=0;i<k;i++)
    {
        cin>>j;
        mp[j]=1;
    }

    ll min=inf;
    for(i=1; i<=n;i++)
    {
        if(mp[i]==1 && adj[i].size()>0)
        {
            for(j=0;j<adj[i].size();j++)
            {
                if(mp[adj[i][j].to]==0 && adj[i][j].cost<min)
                {
                    min=adj[i][j].cost;
                }
            }

        }
    }

    if(min!=inf)
        printf("%I64d",min);
    else
        printf("-1");

    return 0;
}
