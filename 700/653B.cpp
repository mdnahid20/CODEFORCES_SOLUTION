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
int dp[7][7];
vector<int> adj[6];

int main()
{
    int n,q;
    sc2(n,q);
    fornt(0,q)
    {
        string a,b;
        cin>>a>>b;
        adj[b[0]-'a'].push_back(a[0]-'a');
    }
    dp[1][0]=1;
    fornt(1,n+1)
    {
        fornt2(0,6)
        {
            if(dp[i][j])
            {
                for(int k=0; k<adj[j].size(); k++)
                    dp[i+1][adj[j][k]]+=dp[i][j];
            }
        }
    }
    int ans=0;
    for(int i=0; i<6; i++)
        ans+=dp[n][i];
    pr(ans);
}
