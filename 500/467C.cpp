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

const int MAX = 2e5 + 5;
using namespace std;
ll a[MAX],sum[MAX],dp[5005][5005],n,m,k;

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>k;
    fornt(1,n+1)cin>>a[i];
    fornt(1,n+1)sum[i] = sum[i-1] + a[i];
    fornt(m,n+1)
    {
        fornt2(1,k+1)
        {
            dp[i][i2] = max(dp[i-1][i2],dp[i-m][i2-1] + sum[i]-sum[i-m]);
        }
    }
    cout<<dp[n][k]<<endl;
    return 0 ;
}
































