#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define pb push_back
#define f first
#define s second
#define sz(a) signed(a.size())
#define all(v) v.begin(),v.end()

int func(int a,int b,int c,int d)
{
    vi v(4);
    v[0]=a;
    v[1]=b;
    v[2]=c;
    v[3]=d;
    sort(all(v));
    return ((v[1]+v[2])/2);
}

void solve()
{
    int n,m;
    cin >> n >> m;
    int grid[n+1][m+1];
    for(int i(1); i<=n; ++i)
    {
        for(int j(1); j<=m; ++j)
        {
            cin >> grid[i][j];
        }
    }
    int ans[n+1][m+1];
    for(int i(1); i<=n; ++i)
    {
        for(int j(1); j<=m; ++j)
        {
            ans[i][j]=0;
        }
    }
    for(int i(1); i<=n; ++i)
    {
        for(int j(1); j<=m; ++j)
        {
            int u=func(grid[i][j],grid[n+1-i][j],grid[i][m+1-j],grid[n+1-i][m+1-j]);
            ans[i][j]=u;
        }
    }
    int fin=0;
    for(int i(1); i<=n; ++i)
    {
        for(int j(1); j<=m; ++j)
        {
            fin+=abs(grid[i][j]-ans[i][j]);
        }
    }
    cout << fin << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
