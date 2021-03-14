
/*** In the name of Allah(swt), the most gracious, most merciful.***/
/*** Alhamdulillah for Everything ***/

#include<bits/stdc++.h>
#define ll long long
#define inf 0x3f3f3f3f
#define rep(i,a,n) for(int i=a;i<=n;i++)
#define MID (t[k].l+t[k].r)>>1
#define cl(a,b) memset(a,b,sizeof(a))
#define dbg() printf("aaa\n")
using namespace std;
const int maxn=110;
int n;
int a[maxn];
int dp[maxn][maxn][2];
#define min(x,y) ((x)<(y)?(x):(y))
int main()
{
    scanf("%d",&n);
    rep(i,1,n) scanf("%d",&a[i]);
    cl(dp,inf);
    dp[0][0][1]=dp[0][0][0]=0;
    rep(i,1,n)
    {
        rep(j,0,i/2)
        {
            if(a[i]==0 || a[i]%2==0)
            {
                dp[i][j+1][0]=min(dp[i][j+1][0],dp[i-1][j][0]);
                dp[i][j+1][0]=min(dp[i][j+1][0],dp[i-1][j][1]+1);
            }
            if(a[i]==0||a[i]%2)
            {
                dp[i][j][1]=min(dp[i][j][1],dp[i-1][j][1]);
                dp[i][j][1]=min(dp[i][j][1],dp[i-1][j][0]+1);
            }
        }
    }
    printf("%d\n",min(dp[n][n/2][0],dp[n][n/2][1]));

    return 0;
}
