#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;
vector<int>v;
int dp[500][500],n;
int solve(int idx,int t)
{
    if(idx==n)
        return 0;
    if(dp[idx][t]!=-1)
        return dp[idx][t];
    int mn = INT_MAX;
    for(int i=t; i<=max(t,v[idx]); ++i)
    {
        mn =min(mn,abs(v[idx]-i)+solve(idx+1,i+1));
    }
    return dp[idx][t]=mn;
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof dp);
        v.clear();
        int x;
        cin>>n;
        fornt(0,n)
        {
            cin>>x;
            v.pb(x);
        }
        sort(v.begin(),v.end());
        cout<<solve(0,1)<<endl;
    }
}

