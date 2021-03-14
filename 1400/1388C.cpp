#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;
const int N = 1e5 + 7;
vector<int>gr[N];
bool flag = true;
int p[N],h[N],a[N],g[N];

void dfs(int v,int ancestor = -1)
{
    a[v]=p[v];
    int sum_g =0;
    for(int to : gr[v])
    {
        if (to == ancestor) continue;
        dfs(to, v);
        sum_g += g[to];
        a[v] += a[to];
    }
    if ((a[v] + h[v]) % 2 != 0)
        flag = false;
    g[v] = (a[v] + h[v]) / 2;
    if (g[v] >= 0 && g[v] <= a[v]) {}
    else flag = false;
    if (sum_g <= g[v]) {}
    else flag = false;
}

int main()
{
    fastread();
    int t,x,y;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        fornt(0,n)
        cin>>p[i];
        fornt(0,n)
        cin>>h[i];
        fornt(0,n-1)
        {
            cin>>x>>y;
            --x,--y;
            gr[x].push_back(y);
            gr[y].push_back(x);
        }
        dfs(0);
        cout << (flag ? "YES" : "NO") << endl;
        fornt(0,n)gr[i].clear();
    }
}


