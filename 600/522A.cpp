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
using namespace std;

int d=0;
map<string,vector<string > > adj;
map<string,bool> vis;

int dfs(string s)
{
    if(vis[s])
        return 0;

    int dist=0;
    vis[s]=1;

    for(int i=0;i<adj[s].size();i++)
    {
        dist=max(dfs(adj[s][i]),dist);
    }

    return dist+1;
}

int main()
{

    int i,j,k;
    int n,m;
    string s1,s2,r;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s1>>r>>s2;

        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

        adj[s2].push_back(s1);
        adj[s1].push_back(s2);
    }

    cout<<dfs("polycarp");
    return 0;
}

